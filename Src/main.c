#include <stdint.h>

// Register addresses
#define RCC_AHB1ENR   (*((volatile uint32_t*)0x40023830))
#define GPIOA_MODER   (*((volatile uint32_t*)0x40020000))
#define GPIOA_ODR     (*((volatile uint32_t*)0x40020014))

void delay(volatile uint32_t count) {
    while(count--);
}

int main(void) {
    // Enable GPIOA clock
    RCC_AHB1ENR |= (1 << 0);

    // Set PA5 as output (bits 11:10 = 01)
    GPIOA_MODER &= ~(3 << 10);
    GPIOA_MODER |=  (1 << 10);

    while(1) {
        GPIOA_ODR ^= (1 << 5);  // toggle PA5
        delay(500000);
    }
}
