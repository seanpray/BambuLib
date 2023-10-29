#include "simdjson.h"
#include "simdjson/padded_string.h"

const simdjson::padded_string CHAMBER_LIGHT_ON = R"( { "system": {"sequence_id": "0", "command": "ledctrl", "led_node": "chamber_light", "led_mode": "on",
                "led_on_time": 500, "led_off_time": 500, "loop_times": 0, "interval_time": 0}} )"_padded;

const simdjson::padded_string CHAMBER_LIGHT_OFF = R"( { "system": {"sequence_id": "0", "command": "ledctrl", "led_node": "chamber_light", "led_mode": "off",
               "led_on_time": 500, "led_off_time": 500, "loop_times": 0, "interval_time": 0}} )"_padded;

const simdjson::padded_string SPEED_PROFILE_TEMPLATE = R"( {"print": {"sequence_id": "0", "command": "print_speed", "param": ""}} )"_padded;

const simdjson::padded_string GET_VERSION = R"( {"info": {"sequence_id": "0", "command": "get_version"}} )"_padded;

const simdjson::padded_string PAUSE = R"( {"print": {"sequence_id": "0", "command": "pause"}} )"_padded;

const simdjson::padded_string RESUME = R"( {"print": {"sequence_id": "0", "command": "resume"}} )"_padded;

const simdjson::padded_string STOP = R"( {"print": {"sequence_id": "0", "command": "stop"}} )"_padded;

const simdjson::padded_string PUSH_ALL = R"( {"pushing": {"sequence_id": "0", "command": "pushall"}} )"_padded;

const simdjson::padded_string START_PUSH = R"(  { "pushing": {"sequence_id": "0", "command": "start"}} )"_padded;

// gcode lines must be separated by \n
const simdjson::padded_string SEND_GCODE_TEMPLATE = R"( {"print": {"sequence_id": "0", "command": "gcode_line", "param": ""}} )"_padded;

// X1 only
const simdjson::padded_string GET_ACCESSORIES = R"( {"system": {"sequence_id": "0", "command": "get_accessories", "accessory_type": "none"}} )"_padded;
