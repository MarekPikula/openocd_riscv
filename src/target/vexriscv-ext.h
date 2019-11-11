#pragma once

#if defined(__MINGW32__)

# if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__

#  define htobe16(x) htons(x)
#  define htole16(x) (x)
#  define be16toh(x) ntohs(x)
#  define le16toh(x) (x)

#  define htobe32(x) htonl(x)
#  define htole32(x) (x)
#  define be32toh(x) ntohl(x)
#  define le32toh(x) (x)

#  define htobe64(x) htonll(x)
#  define htole64(x) (x)
#  define be64toh(x) ntohll(x)
#  define le64toh(x) (x)

# elif __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__

#  define htobe16(x) (x)
#  define htole16(x) __builtin_bswap16(x)
#  define be16toh(x) (x)
#  define le16toh(x) __builtin_bswap16(x)

#  define htobe32(x) (x)
#  define htole32(x) __builtin_bswap32(x)
#  define be32toh(x) (x)
#  define le32toh(x) __builtin_bswap32(x)

#  define htobe64(x) (x)
#  define htole64(x) __builtin_bswap64(x)
#  define be64toh(x) (x)
#  define le64toh(x) __builtin_bswap64(x)

# else
#  error Unexpected __BYTE_ORDER__

# endif /* __MINGW__ __BYTE_ORDER__ */

#elif defined(_MSC_VER)

# if BYTE_ORDER == LITTLE_ENDIAN

# define htobe16(x) htons(x)
# define htole16(x) (x)
# define be16toh(x) ntohs(x)
# define le16toh(x) (x)

# define htobe32(x) htonl(x)
# define htole32(x) (x)
# define be32toh(x) ntohl(x)
# define le32toh(x) (x)

# define htobe64(x) htonll(x)
# define htole64(x) (x)
# define be64toh(x) ntohll(x)
# define le64toh(x) (x)

# elif BYTE_ORDER == BIG_ENDIAN

# define htobe16(x) (x)
# define htole16(x) __builtin_bswap16(x)
# define be16toh(x) (x)
# define le16toh(x) __builtin_bswap16(x)

# define htobe32(x) (x)
# define htole32(x) __builtin_bswap32(x)
# define be32toh(x) (x)
# define le32toh(x) __builtin_bswap32(x)

# define htobe64(x) (x)
# define htole64(x) __builtin_bswap64(x)
# define be64toh(x) (x)
# define le64toh(x) __builtin_bswap64(x)

# else
# error Unexpected BYTE_ORDER.

# endif /* _MSC_VER BYTE_ORDER */

#endif
