#include<bcm2835.h>

int main()
{
if(!bcm2835_init()) return 1;
bcm2835_gpio_fsel(18,BCM2835_GPIO_FSEL_OUTP);
bcm2835_gpio_clr(18);
//while(1)
//{
//bcm2835_gpio_set(18);
//}
}
