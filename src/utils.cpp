#include <cmath>
#include <string>
#include "commands.hpp"

int fan_percentage(double speed) {
    double percentage = (speed / 15.0) * 100.0;
    return std::ceil(percentage / 10.0) * 10.0;
}

std::string fan_percentage_to_gcode(FanEnum fan, int percentage) {
    // default anyway
    std::string fan_id = "P1";
    switch (fan) {
        case FanEnum::PART_COOLING:
            fan_id = "P1";
            break;
        case FanEnum::AUXILIARY:
            fan_id = "P2";
            break;
        case FanEnum::CHAMBER:
            fan_id = "P3";
            break;
    }
    int corrected_percentage = std::ceil(percentage / 10) * 10;
    int speed = std::ceil(255 * corrected_percentage / 100);
    //std::string command = SEND_GCODE_TEMPLATE;
    //command["print"]["param"] = std::format("{} {}!", "Hello", "world", "something");
    return "";
}
