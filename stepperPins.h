#ifndef STEPPER_PINS_H   /* Include guard */
#define STEPPER_PINS_H

#define C GPIO_Pin_6
#define D GPIO_Pin_5
#define A GPIO_Pin_9
#define B GPIO_Pin_8
#define AD (GPIO_Pin_9 | GPIO_Pin_5)
#define AB (GPIO_Pin_9 | GPIO_Pin_8)
#define BC (GPIO_Pin_8 | GPIO_Pin_6)
#define CD (GPIO_Pin_6 | GPIO_Pin_5)

#endif // FOO_H_