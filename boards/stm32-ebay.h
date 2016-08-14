#ifndef __BOARD_H__
#define __BOARD_H__

#include <stdbool.h>
#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>

#define BOARD_USE_DEBUG_PINS_AS_GPIO false

#define BOARD_RCC_LED                RCC_GPIOC
#define BOARD_PORT_LED               GPIOC
#define BOARD_PIN_LED                GPIO13
#define BOARD_LED_HIGH_IS_BUSY       true

// ebay stm32f103c8t6 board has fixed pullup to 5V
// #define BOARD_RCC_USB_PULLUP         RCC_GPIOA
// #define BOARD_PORT_USB_PULLUP        GPIOA
// #define BOARD_PIN_USB_PULLUP         GPIO13
// #define BOARD_USB_HIGH_IS_PULLUP     true

/* Currently you can only use SPI1, since it has highest clock. */

#endif /* __BOARD_H__ */
