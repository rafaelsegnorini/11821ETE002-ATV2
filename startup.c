#include <stdint.h>
#include <stdlib.h>
#define SRAM_START 0x20000000U     /Início da memória SRAM/
#define SRAM_SIZE  (128U * 1024U) /Tamanho da SRAM/
#define SRAM_END   ((SRAM_START)+ \
                    (SRAM_SIZE)) /Final da SRAM STM32F411/

#define STACK_START SRAM_END     /Início da Stack/

int main(void);

void reset_handler (void);
void nmi_handler (void) __attribute__ ((alias("default_handler")));
void hardfault_handler (void) __attribute__ ((alias("default_handler")));
void memmanage_handler (void) __attribute__ ((alias("default_handler")));
void busfault_handler (void) __attribute__ ((alias("default_handler")));
void usagefault_handler(void) __attribute__ ((alias("default_handler")));
void svc_handler (void) __attribute__ ((alias("default_handler")));
void debugmon_handler (void) __attribute__ ((alias("default_handler")));
void pendsv_handler (void) __attribute__ ((alias("default_handler")));
void systick_handler (void) __attribute__ ((alias("default_handler")));
void WWDG_handler (void) _attribute_ ((alias("default_handler")));
void EXTI16_handler (void) _attribute_ ((alias("default_handler")));
void EXTI21_handler (void) _attribute_ ((alias("default_handler")));
void EXTI22_handler (void) _attribute_ ((alias("default_handler")));
void FLASH_handler (void) _attribute_ ((alias("default_handler")));
void RCC_handler (void) _attribute_ ((alias("default_handler")));
void EXTI0_handler (void) _attribute_ ((alias("default_handler")));
void EXTI1_handler (void) _attribute_ ((alias("default_handler")));
void EXTI2_handler (void) _attribute_ ((alias("default_handler")));
void EXTI3_handler (void) _attribute_ ((alias("default_handler")));
void EXTI4_handler (void) _attribute_ ((alias("default_handler")));
void DMA1_Stream0_handler (void) _attribute_ ((alias("default_handler")));
void DMA1_Stream1_handler (void) _attribute_ ((alias("default_handler")));
void DMA1_Stream2_handler (void) _attribute_ ((alias("default_handler")));
void DMA1_Stream3_handler (void) _attribute_ ((alias("default_handler")));
void DMA1_Stream4_handler (void) _attribute_ ((alias("default_handler")));
void DMA1_Stream5_handler (void) _attribute_ ((alias("default_handler")));
void DMA1_Stream6_handler (void) _attribute_ ((alias("default_handler")));
void ADC_handler (void) _attribute_ ((alias("default_handler")));
void EXTI9_5_handler (void) _attribute_ ((alias("default_handler")));
void TIM1_BRK_TIM9_handler (void) _attribute_ ((alias("default_handler")));
void TIM1_UP_TIM10_handler (void) _attribute_ ((alias("default_handler")));
void TIM1_TRG_COM_TIM11_handler (void) _attribute_ ((alias("default_handler")));
void TIM1_CC_handler (void) _attribute_ ((alias("default_handler")));
void TIM2_handler (void) _attribute_ ((alias("default_handler")));
void TIM3_handler (void) _attribute_ ((alias("default_handler")));
void TIM4_handler (void) _attribute_ ((alias("default_handler")));
void I2C1_EV_handler (void) _attribute_ ((alias("default_handler")));
void I2C1_ER_handler (void) _attribute_ ((alias("default_handler")));
void I2C2_EV_handler (void) _attribute_ ((alias("default_handler")));
void I2C2_ER_handler (void) _attribute_ ((alias("default_handler")));
void SPI1_handler (void) _attribute_ ((alias("default_handler")));
void SPI2_handler (void) _attribute_ ((alias("default_handler")));
void USART1_handler (void) _attribute_ ((alias("default_handler")));
void USART2_handler (void) _attribute_ ((alias("default_handler")));
void EXTI15_10_handler (void) _attribute_ ((alias("default_handler")));
void EXTI17_handler (void) _attribute_ ((alias("default_handler")));
void EXTI18_handler (void) _attribute_ ((alias("default_handler")));
void DMA1_Stream7_handler (void) _attribute_ ((alias("default_handler")));
void SDIO_handler (void) _attribute_ ((alias("default_handler")));
void TIM5_handler (void) _attribute_ ((alias("default_handler")));
void SPI3_handler (void) _attribute_ ((alias("default_handler")));
void DMA2_Stream0_handler (void) _attribute_ ((alias("default_handler")));
void DMA2_Stream1_handler (void) _attribute_ ((alias("default_handler")));
void DMA2_Stream2_handler (void) _attribute_ ((alias("default_handler")));
void DMA2_Stream3_handler (void) _attribute_ ((alias("default_handler")));
void DMA2_Stream4_handler (void) _attribute_ ((alias("default_handler")));
void OTG_FS_handler (void) _attribute_ ((alias("default_handler")));
void DMA2_Stream5_handler (void) _attribute_ ((alias("default_handler")));
void DMA2_Stream6_handler (void) _attribute_ ((alias("default_handler")));
void DMA2_Stream7_handler (void) _attribute_ ((alias("default_handler")));
void USART6_handler (void) _attribute_ ((alias("default_handler")));
void I2C3_EV_handler (void) _attribute_ ((alias("default_handler")));
void I2C3_ER_handler (void) _attribute_ ((alias("default_handler")));
void FPU_handler (void) _attribute_ ((alias("default_handler")));
void SPI4_handler (void) _attribute_ ((alias("default_handler")));
void SPI5_handler (void) _attribute_ ((alias("default_handler")));

/* Variaveis exportadas pelo linker script */
extern uint32_t _sdata; /* Inicio da secao .data */
extern uint32_t _edata; /* Fim da secao .data */
extern uint32_t _la_data; /* Endereco de carga na RAM da secao .data */
extern uint32_t _sbss; /* Inicio da secao .bss */
extern uint32_t _ebss; /* Fim da secao .bss */

uint32_t vectors[] __attribute__((section(".isr_vectors"))) =
{
STACK_START,             /* 0x0000 0000 */
(uint32_t)reset_handler,    /* 0x0000 0004 */
(uint32_t)nmi_handler,       /* 0x0000 0008 */
(uint32_t)default_handler, /* 0x0000 000c */
(uint32_t)default_handler, /* 0x0000 0010 */
(uint32_t)default_handler, /* 0x0000 0014 */
(uint32_t)default_handler, /* 0x0000 0018 */
0,                          /* 0x0000 001c */
0,          /* 0x0000 0020 */
0, /* 0x0000 0024 */
0, /* 0x0000 0028 */
(uint32_t)default_handler, /* 0x0000 002c */
(uint32_t)default_handler, /* 0x0000 0030 */
0, /* 0x0000 0034 */
(uint32_t)default_handler, /* 0x0000 0038 */
(uint32_t)default_handler, /* 0x0000 003c */
};

void reset_handler()
{
uint32_t i;
/* Copia a secao .data para a RAM */
uint32_t size = (uint32_t)&_edata - (uint32_t)&_sdata;
uint8_t *pDst = (uint8_t*)&_sdata; /* SRAM */
uint8_t *pSrc = (uint8_t*)&_la_data; /* FLASH */
for(i = 0; i < size; i++)
{
*pDst++ = *pSrc++;
}
/* Preenche a secao .bss com zero */
size = (uint32_t)&_ebss - (uint32_t)&_sbss;
pDst = (uint8_t*)&_sbss;
for(i = 0 ; i < size; i++)
{
*pDst++ = 0;
}
/* Chama a funcao main() */
main();
}
void default_handler(void)
{
while(1){};
}

void nmi_handler(void)
{
while(1){};
}
void default_handler(void)
{
while(1){};
}