#include "simdjson.h"
#include "models.h"
#include <mqtt/async_client.h>

Temperature::Temperature() {
    bed_temp = 0;
    target_bed_temp = 0;
    chamber_temp = 0;
    nozzle_temp = 0;
    target_nozzle_temp = 0;
}

void Temperature::update(simdjson::ondemand::document data) {
    // TODO check if this actually works
    bed_temp = data["bed_temper"] || bed_temp;
    target_bed_temp = data["bed_target_temper"] || target_bed_temp;
    chamber_temp = data["chamber_temper"] || chamber_temp;
    nozzle_temp = data["nozzle_temper"] || nozzle_temp;
    target_nozzle_temp = data["nozzle_target_temper"] || target_nozzle_temp;
}

Lights::Lights(mqtt::async_client_ptr async_client) {
    client = async_client;
    chamber_light = "unknown";
    work_light = "unknown";
}

inline void Lights::turn_on_chamber_light() {
    //client->publish()
}
