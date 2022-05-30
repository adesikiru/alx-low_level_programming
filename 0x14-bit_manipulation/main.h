#ifndef D143C0A6_E12C_465B_9DD9_FE309AAC5361
#define D143C0A6_E12C_465B_9DD9_FE309AAC5361

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif /* D143C0A6_E12C_465B_9DD9_FE309AAC5361 */
