#ifndef _INSTRUCTIONS_H_
#define _INSTRUCTIONS_H_

#include "Joystick.h"

#if !defined(ARRAY_SIZE)
    #define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))
#endif

// change this value to alter how many resets you make
static const uint16_t resets = 400;

typedef enum {
    move_up,
    move_down,
    move_right,
    move_left,
    press_a,
    press_b,
    press_x,
    press_y,
    press_r,
    press_home,
    hang
} action_t;

typedef struct {
    action_t action;
    uint16_t duration;
} command_t;

static const command_t wake_up_hang[] = {
    { hang, 100 }
};

static const command_t start_farm_steps[] = {

    { hang, 10 },
    { press_a, 5 },
    { hang, 10 },

    // add wishing piece stuff
    // could cut if arduino memory is tight
    { press_a, 5 },
    { hang, 40 },
    { press_a, 5 },
    { hang, 40 },
    { press_a, 5 },
    { hang, 100 },
    { press_a, 5 },
    { hang, 40 },
    { press_a, 5 },
    { hang, 40 },
    { press_a, 5 },
    { hang, 40 },
    { press_a, 5 },
    { hang, 80 }
};

static const command_t system_settings_steps[] = {

    { hang, 70 },
    
    { press_home, 5 },
    { hang, 40 },

    { move_down, 5 },
    { hang, 5 },
    
    { move_right, 5 },
    { hang, 5 },
    { move_right, 5 },
    { hang, 5 },
    { move_right, 5 },
    { hang, 5 },
    { move_right, 5 },
    { hang, 5 },

    { press_a, 5 },
    { hang, 40 },

    { move_down, 5 },
    { hang, 5 },
    { move_down, 5 },
    { hang, 5 },
    { move_down, 5 },
    { hang, 5 },
    { move_down, 5 },
    { hang, 5 },
    { move_down, 5 },
    { hang, 5 },
    { move_down, 5 },
    { hang, 5 },
    { move_down, 5 },
    { hang, 5 },
    { move_down, 5 },
    { hang, 5 },
    { move_down, 5 },
    { hang, 5 },
    { move_down, 5 },
    { hang, 5 },
    { move_down, 5 },
    { hang, 5 },
    { move_down, 5 },
    { hang, 5 },
    { move_down, 5 },
    { hang, 5 },
    { move_down, 5 },
    { hang, 5 },
    
    { press_a, 5 },
    { hang, 30 },
    { move_down, 5 },
    { hang, 5 },
    { move_down, 5 },
    { hang, 5 },
    { move_down, 5 },
    { hang, 5 },
    { move_down, 5 },
    { hang, 5 },
    
    { press_a, 5 },
    { hang, 30 },
    { move_down, 5 },
    { hang, 5 },
    { move_down, 5 },
    { hang, 5 }

};

static const command_t change_month_steps[] = {

    { hang, 10 },

    { press_a, 5 },
    { hang, 30 },
    { move_up, 5 },
    { hang, 5 },
    { move_right, 5 },
    { hang, 5 },
    { move_right, 5 },
    { hang, 5 },
    { move_right, 5 },
    { hang, 5 },
    { move_right, 5 },
    { hang, 5 },
    { move_right, 5 },
    { hang, 5 },
    { move_right, 5 },
    { hang, 5 },
    
    { press_a, 5 },
    { hang, 30 },

    { press_home, 5 },
    { hang, 40 },

    { press_a, 5 },
    { hang, 30 }
};

static const command_t change_year_steps[] = {
    
    { hang, 10 },

    { press_a, 5 },
    { hang, 30 },
    { move_up, 5 },
    { hang, 5 },
    { move_right, 5 },
    { hang, 5 },
    { move_right, 5 },
    { hang, 5 },
    { move_up, 5 },
    { hang, 5 },
    { move_right, 5 },
    { hang, 5 },
    { move_right, 5 },
    { hang, 5 },
    { move_right, 5 },
    { hang, 5 },
    { move_right, 5 },
    { hang, 5 },
    
    { press_a, 5 },
    { hang, 30 },

    { press_home, 5 },
    { hang, 40 },

    { press_a, 5 },
    { hang, 30 }
};

static const command_t reset_den_steps[] = {

    { hang, 60 },

    { press_b, 5 },
    { hang, 40 },

    { press_a, 5 },
    { hang, 210 }

};

static const command_t take_watts_steps[] = {

    { hang, 40 },

    { press_a, 5 },
    { hang, 30 },
    { press_a, 5 },
    { hang, 30 },
    { press_a, 5 },
    { hang, 30 },
    { press_a, 5 },
    { hang, 30 },

    { hang, 170 }

};


#endif