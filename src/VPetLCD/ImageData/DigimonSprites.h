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

#include "../../GameLogic/Digimon.h"

#define N_SPRITES_PER_DIGIMON 12
#define SPRITES_DIGIMON_RESOLUTION 16





#define SPRITE_DIGIMON_WALK_0 0
#define SPRITE_DIGIMON_WALK_1 1  //is used as attack1
#define SPRITE_DIGIMON_HAPPY 2
#define SPRITE_DIGIMON_ANGRY_1 3
#define SPRITE_DIGIMON_ATTACK_1 4
#define SPRITE_DIGIMON_EATING1 5
#define SPRITE_DIGIMON_EATING2 6
#define SPRITE_DIGIMON_SURPRISED 7
#define SPRITE_DIGIMON_TIRED 8
#define SPRITE_DIGIMON_INJURED_1 9 
#define SPRITE_DIGIMON_INJURED_2 10
#define SPRITE_DIGIMON_SLEEPING 11







const unsigned short DIGIMON[N_DIGIMON][N_SPRITES_PER_DIGIMON][SPRITES_DIGIMON_RESOLUTION] PROGMEM = {
    // 0 agumon 
    {
        {//0
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
        {//1
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
        {//2
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

         {//3
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


        {//4
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

        {//5=2
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

        {//6
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

        {//7
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
        {//8
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
        {//NONONO
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


    },
   
    // koromon
    {
        {
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000110001100000,
        0b0000101110100000,
        0b0001000000010000,
        0b0010010001001000,
        0b0010010001001000,
        0b0010001110001000,
        0b0010000000001000,
        0b0010000000001000,
        0b0001000000010000,
        0b0000111111100000,
        },

        {
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000110001100000,
        0b0000101110100000,
        0b0001000000010000,
        0b0010010001001000,
        0b0010010001001000,
        0b0010000100001000,
        0b0010000000001000,
        0b0001111111110000,
        },

        {
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000011011000000,
        0b0000101010100000,
        0b0001000100010000,
        0b0010010001001000,
        0b0010010001001000,
        0b0010100000101000,
        0b0010111111101000,
        0b0010011111001000,
        0b0010001110001000,
        0b0010000000001000,
        0b0010000000001000,
        0b0001000000010000,
        0b0000111111100000,
        },

        {
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000111000000,
        0b0000011100100000,
        0b0000100000010000,
        0b0001000100001000,
        0b0010011000001000,
        0b0010000000001000,
        0b0011110000001000,
        0b0010000000010000,
        0b0001111111100000,
        },

        {
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000111110000000,
        0b0001000001100000,
        0b0000100000010000,
        0b0000010001001000,
        0b0000001011010100,
        0b0000001000000100,
        0b0010101000001100,
        0b0011110000001000,
        0b0010000000010000,
        0b0001111111100000,
        },

        {
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000110001100000,
        0b0000101110100000,
        0b0001000000010000,
        0b0010010001001000,
        0b0010010001001000,
        0b0010000100001000,
        0b0010000000001000,
        0b0001111111110000,
        },

        {
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000111110000000,
        0b0001000001100000,
        0b0000100000010000,
        0b0000010001001000,
        0b0000001011010100,
        0b0000001000000100,
        0b0010101000001100,
        0b0011110000001000,
        0b0010000000010000,
        0b0001111111100000,
        },

        {
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000111110000000,
        0b0001000001100000,
        0b0000100000010000,
        0b0000010001001000,
        0b0000001011010100,
        0b0000001000000100,
        0b0010101000001100,
        0b0011110000001000,
        0b0010000000010000,
        0b0001111111100000,
        },

        {
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000110001100000,
        0b0000101110100000,
        0b0001000000010000,
        0b0010110001101000,
        0b0010000000001000,
        0b0010000000001000,
        0b0010001110001000,
        0b0010000000001000,
        0b0010000000001000,
        0b0001000000010000,
        0b0000111111100000,
        },

        {
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000011011000000,
        0b0000101110100000,
        0b0001000000010000,
        0b0010111011101000,
        0b0010000000001000,
        0b0010001110001000,
        0b0010000000001000,
        0b0001111111110000,
        },

        {
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000110001100000,
        0b0000101110100000,
        0b0001000000010000,
        0b0010110001101000,
        0b0010000000001000,
        0b0010000000001000,
        0b0010001110001000,
        0b0010000000001000,
        0b0010000000001000,
        0b0001000000010000,
        0b0000111111100000,
        },

        {
        0b0000000000000000,
        0b0000000000000000,
        0b0000000000000000,
        0b0000011011000000,
        0b0000101110100000,
        0b0001000000010000,
        0b0010111011101000,
        0b0010000000001000,
        0b0111111111111110,
        0b1001000000001001,
        0b1001111111111001,
        0b1010101010101101,
        0b1011010101010101,
        0b1001111111111001,
        0b1000000000000001,
        0b0111111111111110,
        },


    },


    //botamon
   {
       {
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000001001000000,
0b0000011111100000,
0b0000010110100000,
0b0000011111100000,
0b0000011001100000,
0b0000111111110000,
},

{
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000001001000000,
0b0000001111000000,
0b0000011110100000,
0b0000010111100000,
0b0000111111110000,
},

{
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000001001000000,
0b0000001111000000,
0b0000010110100000,
0b0000011111100000,
0b0000011001100000,
0b0000011001100000,
0b0000011111100000,
0b0000001111000000,
},

{
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000101000000,
0b0000001111000000,
0b0000011001100000,
0b0000011111100000,
0b0000000011100000,
0b0000011111100000,
0b0000001111000000,
},

{
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000011110010000,
0b0000111111110000,
0b0000001101100000,
0b0000000111100000,
0b0000000011100000,
0b0000000011100000,
0b0000011111110000,
0b0000111111110000,
},

{
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000001001000000,
0b0000001111000000,
0b0000011110100000,
0b0000010111100000,
0b0000111111110000,
},

{
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000011110010000,
0b0000111111110000,
0b0000001101100000,
0b0000000111100000,
0b0000000011100000,
0b0000000011100000,
0b0000011111110000,
0b0000111111110000,
},

{
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000011110010000,
0b0000111111110000,
0b0000001101100000,
0b0000000111100000,
0b0000000011100000,
0b0000000011100000,
0b0000011111110000,
0b0000111111110000,
},

{
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000010000100000,
0b0000011111100000,
0b0000101111010000,
0b0000110110110000,
0b0000111111110000,
0b0000011001100000,
0b0000001001000000,
0b0000001111000000,
},

{
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000001000000,
0b0000001111000000,
0b0000001011000000,
0b0000011111000000,
0b0000011110000000,
},

{
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000010000100000,
0b0000011111100000,
0b0000101111010000,
0b0000110110110000,
0b0000111111110000,
0b0000011001100000,
0b0000001001000000,
0b0000001111000000,
},

{
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000001001000000,
0b0000001111000000,
0b0000011111100000,
0b0000100110010000,
0b0000111111110000,
},


   },


    // betamon
   {

    {
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0001111100000000,
0b0001000011000000,
0b0000100000100000,
0b0000101111010000,
0b0001000000111000,
0b0010000001100111,
0b0101001010001101,
0b0101001000010011,
0b0100000000000010,
0b0100000000101001,
0b1011111001110001,
0b1111001111011110,
},

       {
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0001111100000000,
0b0001000011000000,
0b0000100000100000,
0b0000101111010000,
0b0001010000111000,
0b0010000001100111,
0b0101000010001101,
0b0101000000010011,
0b0100000000000010,
0b1100001000011001,
0b1111111111111111,
},

{
0b0000000000000000,
0b0001111100000000,
0b0001000010000000,
0b0000100001000000,
0b0000111110100000,
0b0001000001010000,
0b0011001100110000,
0b0100000001111000,
0b0111111000001100,
0b0010111100000111,
0b0001011110011101,
0b0001011110000011,
0b0111111110000010,
0b0100000000101001,
0b1011111001110001,
0b1111001111011110,
},

{
0b0000000000000000,
0b0001111100000000,
0b0001000010000000,
0b0000100001000000,
0b0000111110100000,
0b0001000001010000,
0b0011000010110000,
0b0100000110111000,
0b0111111000001100,
0b0010101110000111,
0b0001111111011101,
0b0001010101000011,
0b0111111111000010,
0b0100000000100001,
0b1011111001110001,
0b1111001111011110,
},

{
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0001111100000000,
0b0001000011000000,
0b0000100000100000,
0b0000101111010000,
0b0001010000111000,
0b0010000101100111,
0b0101001000001101,
0b0100000000010011,
0b0101110000000010,
0b1100001000011001,
0b1111111111111111,
},

{
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0001111100000000,
0b0001000011000000,
0b0000100000100000,
0b0000101111010000,
0b0001010000111000,
0b0010000001100111,
0b0101001010001101,
0b0101001000010011,
0b0100000000000010,
0b1100001000011001,
0b1111111111111111,
},

{
0b0000000000000000,
0b0001111100000000,
0b0001000010000000,
0b0000100001000000,
0b0000111110100000,
0b0001000001010000,
0b0011000010110000,
0b0100000110111000,
0b0111111000001100,
0b0010101110000111,
0b0001111111011101,
0b0001010101000011,
0b0111111111000010,
0b0100000000100001,
0b1011111001110001,
0b1111001111011110,
},

{
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0001111100000000,
0b0001000011000000,
0b0000100000100000,
0b0000101111010000,
0b0001010000111000,
0b0010000001100111,
0b0100000010001101,
0b0111011000010011,
0b0100000000000010,
0b0100000000101001,
0b1011111001110001,
0b1111001111011110,
},

{
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0001111100000000,
0b0001000011000000,
0b0000100000100000,
0b0000101111010000,
0b0001010000111000,
0b0010000001100111,
0b0100000010001101,
0b0100000000010011,
0b0111001100000010,
0b1100000000011001,
0b1111111111111111,
},

{
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0000000000000000,
0b0001111100000000,
0b0001000011000000,
0b0000100000100000,
0b0000101111010000,
0b0001010000111000,
0b0010000001100111,
0b0100000010001101,
0b0111001100010011,
0b0100000000000010,
0b1100001000011001,
0b11111111111111111,
},

{
0b0001111100000000,
0b0001000011000000,
0b0000100000100000,
0b0000101111010000,
0b0001010000111000,
0b0010000001100111,
0b0100000010001101,
0b0111001100010011,
0b0111111111111110,
0b1001000000001001,
0b1001111111111001,
0b1010101010101101,
0b1011010101010101,
0b1001111111111001,
0b1000000000000001,
0b0111111111111110,
}



   }





};
