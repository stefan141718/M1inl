#ifndef PRIMES_H
#define PRIMES_H

char *iarr_to_str(char *buf, int *iarr, int ialen);
int get_next_prime(int prime);
int *prime_factors(int *buffer, int *factors, int num);

#endif