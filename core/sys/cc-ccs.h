#ifndef _CC_CCS_H_
#define _CC_CCS_H_

#ifdef __TI_COMPILER_VERSION__

#ifndef CC_CONF_INLINE
#define CC_CONF_INLINE __inline__
#endif

#define CC_CONF_ALIGN(n) __attribute__((aligned(n)))

#endif // __TI_COMPILER_VERSION__
#endif // _CC_CCS_H_
