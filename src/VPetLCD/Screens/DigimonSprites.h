// Time generated : Thu, 27 Jun 19 09:09:44 +0200  (Server timezone: CET)
// Sprite Size     : 16x16 pixels or 16x16 Bits or 32byte per Sprite
// Memory usage   :  32 Byte per Sprite; or 384 Byte per Spritesheet
// therefore 100 Digimon spritesheets would be 38,4 kB

#pragma once

#if defined(__AVR__)
#include <avr/pgmspace.h>
#elif defined(__PIC32MX__)
#define PROGMEM
#elif defined(__arm__)
#define PROGMEM
#endif

#define N_DIGIMON 1
#define N_SPRITES_PER_DIGIMON 12
#define SPRITES_DIGIMON_RESOLUTION 16

#define DIGIMON_AGUMON 0

#define SPRITE_DIGIMON_WALK_0 0
#define SPRITE_DIGIMON_WALK_1 1
#define SPRITE_DIGIMON_HAPPY 2
#define SPRITE_DIGIMON_ATTACK_1 3
#define SPRITE_DIGIMON_ATTACK_2 4
#define SPRITE_DIGIMON_ANGRY 5
#define SPRITE_DIGIMON_EATING 6
#define SPRITE_DIGIMON_SURPRISED 7
#define SPRITE_DIGIMON_TIRED 8
#define SPRITE_DIGIMON_INJURED_1 9 
#define SPRITE_DIGIMON_INJURED_2 10
#define SPRITE_DIGIMON_SLEEPING 11

const unsigned short DIGIMON[N_DIGIMON][N_SPRITES_PER_DIGIMON][SPRITES_DIGIMON_RESOLUTION] PROGMEM = {
    {
        //agumon
        {
            0b0000000000000000,
            0b0000001111100000,
            0b0000010000010000,
            0b0000110110001000,
            0b0011000011001000,
            0b0100000111000100,
            0b0111100000000100,
            0b0010000000000100,
            0b0001111100001000,
            0b0000110000101000,
            0b0001010001000100,
            0b0001110001110100,
            0b0000011000010010,
            0b0001100111100010,
            0b0010100101010101,
            0b0011111101111111,
        },
        {
            0b0000000000000000,
            0b0000000000000000,
            0b0000001111100000,
            0b0000010000010000,
            0b0000110110001000,
            0b0011000011001000,
            0b0100000111000100,
            0b0111100000000100,
            0b0010000000000100,
            0b0001111100001000,
            0b0000110000101000,
            0b0001010001000100,
            0b0001010001010100,
            0b0001101000100010,
            0b0010100111010101,
            0b0011111101111111,
        },


        {
            0b0000011111100000,
            0b0111100000100000,
            0b1000000110010000,
            0b0111001001010000,
            0b0000100000001000,
            0b0000100000001000,
            0b0011100000001000,
            0b0100000000001000,
            0b0011111000010000,
            0b0001100001010000,
            0b0010100010001000,
            0b0011100011101000,
            0b0000110000100100,
            0b0011001111000100,
            0b0101001010101010,
            0b0111111011111110,
        },

           {
            0b0000011111100000,
            0b0111100000100000,
            0b1000000110010000,
            0b0111001100010000,
            0b0000101100001000,
            0b0000100000001000,
            0b0011100000001000,
            0b0100000000001000,
            0b0011111000010000,
            0b0001100001010000,
            0b0010100010001000,
            0b0011100011101000,
            0b0000110000100100,
            0b0011001111000100,
            0b0101001010101010,
            0b0111111011111110,
        },

        //ab hier wiederholungen
        {
            0b0000000000000000,
            0b0000000000000000,
            0b0000011111000000,
            0b0000100000100000,
            0b0001000100010000,
            0b0110001000010000,
            0b1000000000001000,
            0b1111100000001000,
            0b0100010000001000,
            0b0111000000011100,
            0b1000100000000010,
            0b1111100000011110,
            0b0000100001001000,
            0b0011010010000100,
            0b0101001110101010,
            0b0111111011111110,
        },
        {
            0b0000000000000000,
            0b0000000000000000,
            0b0000011111000000,
            0b0000100000100000,
            0b0001000100010000,
            0b0110001000010000,
            0b1000000000001000,
            0b1111100000001000,
            0b0100010000001000,
            0b0111000000011100,
            0b1000100000000010,
            0b1111100000011110,
            0b0000100001001000,
            0b0011010010000100,
            0b0101001110101010,
            0b0111111011111110,
        },

        {
            0b0000000000000000,
            0b0000000000000000,
            0b0000001111100000,
            0b0000010000010000,
            0b0000110000001000,
            0b0011000000001000,
            0b0100000111000100,
            0b0111100000000100,
            0b0010000000000100,
            0b0001111100001000,
            0b0000110000101000,
            0b0001010001000100,
            0b0001010001010100,
            0b0001101000100010,
            0b0010100111010101,
            0b0011111101111111,
        },
        {
            0b0000000000000000,
            0b0000000000000000,
            0b0000001111100000,
            0b0000010000010000,
            0b0000110000001000,
            0b0011000000001000,
            0b0100001000000100,
            0b0111000110000100,
            0b0111111111111100,
            0b1001000000010010,
            0b1001111111110010,
            0b1011010101011010,
            0b1010101010101010,
            0b1001111111110010,
            0b1000000000000010,
            0b0111111111111100,
        },

        // ab hier filler (agumon hat nur 8 sprites)
        {
            0b0000011111100000,
            0b0111100000100000,
            0b1000000110010000,
            0b0111001100010000,
            0b0000101100001000,
            0b0000100000001000,
            0b0011100000001000,
            0b0100000000001000,
            0b0011111000010000,
            0b0001100001010000,
            0b0010100010001000,
            0b0011100011101000,
            0b0000110000100100,
            0b0011001111000100,
            0b0101001010101010,
            0b0111111011111110,
        },

        {
            0b0000000000000000,
            0b0000001111100000,
            0b0000010000010000,
            0b0000110110001000,
            0b0011000011001000,
            0b0100000111000100,
            0b0111100000000100,
            0b0010000000000100,
            0b0001111100001000,
            0b0000110000101000,
            0b0001010001000100,
            0b0001110001110100,
            0b0000011000010010,
            0b0001100111100010,
            0b0010100101010101,
            0b0011111101111111,
        },
        {
            0b0000000000000000,
            0b0000000000000000,
            0b0000001111100000,
            0b0000010000010000,
            0b0000110110001000,
            0b0011000011001000,
            0b0100000111000100,
            0b0111100000000100,
            0b0010000000000100,
            0b0001111100001000,
            0b0000110000101000,
            0b0001010001000100,
            0b0001010001010100,
            0b0001101000100010,
            0b0010100111010101,
            0b0011111101111111,
        },
        {
            0b0000011111100000,
            0b0111100000100000,
            0b1000000110010000,
            0b0111001100010000,
            0b0000101100001000,
            0b0000100000001000,
            0b0011100000001000,
            0b0100000000001000,
            0b0011111000010000,
            0b0001100001010000,
            0b0010100010001000,
            0b0011100011101000,
            0b0000110000100100,
            0b0011001111000100,
            0b0101001010101010,
            0b0111111011111110,
        },

    }

};
