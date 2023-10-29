#include <string>

int fan_percentage(double speed);
std::string fan_percentage_to_gcode(FanEnum fan, int percentage);

std::string get_filament_name(std::string idx);
