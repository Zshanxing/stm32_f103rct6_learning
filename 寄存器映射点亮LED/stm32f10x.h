

/*---------------------------»ùµØÖ·Ó³Éä--------------------------*/

#define  PERIRH_BASE       ((unsigned int*)0x40000000)
#define  APB1PERIRH_BASE    PERIRH_BASE
#define  APB2PERIRH_BASE   (PERIRH_BASE + 0x10000)
#define  AHBPERIRH_BASE    (PERIRH_BASE + 0x20000)

#define  RCC_BASE         (AHBPERIRH_BASE + 0x1000)
#define  GPIOA_BASE       (APB2PERIRH_BASE + 0x0800)


/*-------------------------¾ßÌå¼Ä´æÆ÷Ó³Éä-----------------------*/

#define  RCC_APB2ENR      *(unsigned int *)(RCC_BASE + 0x18)
	
#define  GPIOA_CRL        *(unsigned int *)(GPIOA_BASE + 0x00)
#define  GPIOA_CRH        *(unsigned int *)(GPIOA_BASE + 0x04)

#define  GPIOA_BRR        *(unsigned int *)(GPIOA_BASE + 0x14)
#define  GPIOA_BSRR       *(unsigned int *)(GPIOA_BASE + 0x10)
	
#define  GPIOA_ODR        *(unsigned int *)(GPIOA_BASE + 0x0C)
#define  GPIOA_IDR        *(unsigned int *)(GPIOA_BASE + 0x08)


