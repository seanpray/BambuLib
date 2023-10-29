#include "simdjson.h"
#include "mqtt/async_client.h"
#include <string>

class Temperature {
    public:
        Temperature();
        void update(simdjson::ondemand::document);
        double bed_temp;
        double target_bed_temp;
        double chamber_temp;
        double nozzle_temp;
        double target_nozzle_temp;
};

class Lights {
    public:
        std::string chamber_light;
        std::string work_light;
        mqtt::async_client_ptr client;
        Lights(mqtt::async_client_ptr client);
        void update(simdjson::ondemand::document);
        void turn_on_chamber_light();
        void turn_off_chamber_light();
};
