#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#define MD5_INPUT_LENGTH 64
typedef unsigned char uchar_8;
typedef unsigned int uint_32;
typedef unsigned long uint_64;
static const uint_32 T[64] = {
 0xd76aa478, 0xe8c7b756, 0x242070db, 
0xc1bdceee,
 0xf57c0faf, 0x4787c62a, 0xa8304613, 
0xfd469501,
 0x698098d8, 0x8b44f7af, 0xffff5bb1, 
0x895cd7be,
 0x6b901122, 0xfd987193, 0xa679438e, 
0x49b40821,
 0xf61e2562, 0xc040b340, 0x265e5a51, 
0xe9b6c7aa,
 0xd62f105d, 0x02441453, 0xd8a1e681, 
0x21e1cde6, 0xc33707d6, 0xf4d50d87, 
0x455a14ed,
 0xa9e3e905, 0xfcefa3f8, 0x676f02d9, 
0x8d2a4c8a,
 0xfffa3942, 0x8771f681, 0x6d9d6122, 
0xfde5380c,
 0xa4beea44, 0x4bdecfa9, 0xf6bb4b60, 
0xbebfbc70,
 0x289b7ec6, 0xeaa127fa, 0xd4ef3085, 
0x04881d05,
 0xd9d4d039, 0xe6db99e5, 0x1fa27cf8, 
0xc4ac5665,
 0xf4292244, 0x432aff97, 0xab9423a7, 
0xfc93a039,
 0x655b59c3, 0x8f0ccc92, 0xffeff47d, 
0x85845dd1,
 0x6fa87e4f, 0xfe2ce6e0, 0xa3014314, 
0x4e0811a1,
 0xf7537e82, 0xbd3af235, 0x2ad7d2bb, 
0xeb86d391};
static const uint_32 A0 = 0x67452301;
static const uint_32 B0 = 0xefcdab89;
static const uint_32 C0 = 0x98badcfe;
static const uint_32 D0 = 0x10325476;
inline uint_32 F(uint_32 x, uint_32 y, uint_32 z) 
{
 return ((x & y) | (~x & z));
}
inline uint_32 G(uint_32 x, uint_32 y, uint_32 z) 
{
 return ((x & y) | (y & ~z));
}
inline uint_32 H(uint_32 x, uint_32 y, uint_32 z) 
{
 return (x ^ y ^ z);
}
inline uint_32 I(uint_32 x, uint_32 y, uint_32 z) {
 return (y ^ (x | ~z));
}
inline uint_32 shift(uint_32 x, uint_32 s) {
 return ((x << s) | (x >> (32 - s)));
}
inline void FF(uint_32 &a, uint_32 b, uint_32 c, 
uint_32 d, uint_32 x, uint_32 s, uint_32 t) {
 a += F(b, c, d) + x + t;
 a = shift(a, s) + b;
}
uint_32 result[4] = {0};
MD5(result, padded);
uchar_8 digestChars[16] = {0};
 memcpy(digestChars, result, 16);
 printf("Digest: %2.2x%2.2x%2.2x%2.2x\n", 
result[0], result[1], result[2], result[3]);
 delete[] padded;
 return 0;
}
