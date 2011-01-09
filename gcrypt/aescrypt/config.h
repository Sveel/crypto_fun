/*
 * config.h
 * Kyle Isom <coder@kyleisom.net>
 *
 * configuration options for aescrypt
 */
 
/* require at least gnupg 1.4.0 */
#define         GCRYPT_MIN_VERSION      "1.4.0"

/* use secure memory - if defined, should be the size in bytes to allocate
 * for secure memory. */
/* #define 	SECURE_MEM		65535 */
#undef         SECURE_MEM        

/* define strength of randomly generated bytes */
#define         RANDOM_STRENGTH         GCRY_VERY_STRONG_RANDOM

/* define the default keyfile name */
#define         DEFAULT_KEYFILE         "aes.key"

/* don't pull in unnecessary gcrypt functions */
#define		GCRYPT_NO_MPI_MACROS	1
#define		GRYPT_NO_DEPRECATED	1

/* for development, pull in debug messages */
#define         DEBUG                   1

/* defines the maximum key length that can be used - this should only
 * be altered if you specifically want to limit key sizes or you choose
 * an algorithm other than AES. */
#define         MAX_KEY_LENGTH          32

/* define the size of the keystore
 * note that the current version uses a statically-sized keystore */
#define         KEYSTORE_SIZE           1

