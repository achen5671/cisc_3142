### 2.1
> What are the differences between int, long, long long,
> and short? Between an unsigned and a signed type? Between a float and
> a double?

answer:
int => integer of 16 bits
long => long integer of 32 bits
long long => long long, which means a longer int of 64 bits
short => short integer of 16 bits (apparently short takes less memory compare to int)
unsigned type => 32-bit datum that encodes a nonnegative integer in the range [0 to 4294967295]
signed type =>A signed integer is a 32-bit datum that encodes an integer in the range [-2147483648 to 2147483647]
float => single precision floating point number, 6 sig digits
double => double precision floating point, 10 sig digits

### 2.2
> To calculate a mortgage payment, what types would you use
> for the rate, principal, and payment? Explain why you selected each type.

answer:
rate => double because of it's precision. If im dealing with money, I will want to be as precise as possible and save that extra $$$.
principle => 
payment => floating point because payment will be to the nearest 2 decimal space. We can save memory by using floats

### 2.3
> What output will the following code produce?

```
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;
int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
```

output:
```
32
4294967264
32
-32
0
0
```

### 2.10
What are the initial values, if any, of each of the following variables?
```
std::string global_str;
int global_int;
int main()
{
int local_int; std::string local_str;
}
```
0
14944

### 2.12
> Which, if any, of the following names are invalid?

(a) int double = 3.14;
(b) int _;
(c) int catch-22;
(d) int 1_or_2 = 1;
(e) double Double = 3.14;

answer: b

### 2.13
> What is the value of j in the following program?
```
int i = 42;
int main()
{
int i = 100; int j = i;
}
```

answer: 100

### 2.14
> Is the following program legal? If so, what values are printed?


### 2.17
What does the following code print?
```
int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
```
answer: 10 10

### 2.27
> Which of the following initializations are legal? Explain why.
> (a) int i = -1, &r = 0;
> (b) int *const p2 = &i2;
> (c) const int i = -1, &r = 0;
> (d) const int *const p3 = &i2;
> (e) const int *p1 = &i2;
> (f) const int &const r2;
> (g) const int i2 = i, &r = i;

answer:

### 2.28
> Explain the following definitions. Identify any that are illegal.
> (a) int i, *const cp; 
> (b) int *p1, *const p2;
> (c) const int ic, &r = ic;
> (d) const int *const p3;
> (e) const int *p;

answer:

