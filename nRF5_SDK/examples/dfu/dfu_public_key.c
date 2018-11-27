
/* This file was automatically generated by nrfutil on 2018-11-26 (YY-MM-DD) at 20:12:55 */

#include "sdk_config.h"
#include "stdint.h"
#include "compiler_abstraction.h"

#if NRF_CRYPTO_BACKEND_OBERON_ENABLED
/* Oberon backend is changing endianness thus public key must be kept in RAM. */
#define _PK_CONST
#else
#define _PK_CONST const
#endif


/** @brief Public key used to verify DFU images */
__ALIGN(4) _PK_CONST uint8_t pk[64] =
{
    0x35, 0x47, 0x70, 0xf0, 0xb5, 0xf2, 0x62, 0xb4, 0x18, 0x71, 0xcf, 0xb6, 0xd1, 0xc1, 0xc4, 0xc0, 0x34, 0xe6, 0xf9, 0xbc, 0x78, 0x67, 0x94, 0x0d, 0xeb, 0xdf, 0x78, 0x48, 0xe8, 0x72, 0x08, 0x23, 
    0x49, 0x4e, 0x5c, 0x03, 0x27, 0x6b, 0x02, 0xa7, 0x79, 0xca, 0xe6, 0x53, 0x59, 0x7f, 0x32, 0x56, 0x02, 0x64, 0x83, 0x3b, 0x01, 0x79, 0xa8, 0x7d, 0x0f, 0x66, 0x0a, 0xda, 0x66, 0xca, 0x53, 0xdb
};
