#ifndef __ARM_KMAP_TYPES_H
#define __ARM_KMAP_TYPES_H

/*
 * This is the "bare minimum".  AIO seems to require this.
 */
#define KM_TYPE_NR 16

#ifdef CONFIG_DEBUG_HIGHMEM
#define KM_NMI		(-1)
#define KM_NMI_PTE	(-1)
#define KM_IRQ_PTE	(-1)
#endif

#endif
