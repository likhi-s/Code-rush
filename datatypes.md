# DATA TYPES

Data types defines the type of value a variable can hold[integers,decimals,characters].

Data types are 
1. Primitive data types(int,char,float,double)
2. Derived data types(Array,pointer)
3. User-defined(structure)


## Primitive Data Types 
 

+ Integer (int)
  * sizeof(int) is 4 bytes
+ Character (char)
  * sizeof(char) is 1 byte
+ Float(float)
  * sizeof(float) is 4 bytes
+ Double(double)
  * sizeof(double) is 8 bytes

## Derived Data Types

+ Character Array:size depends on array size
ex: char l[10] -> size is 10 bytes. 
+ Pointers(stores the address of another variable)
  * sizeof(int *) is 8 bytes
  * sizeof(char *) is 8 bytes
  * sizeof(float *) is 8 bytes
  * sizeof(double *) is 8 bytes
  * sizeof(void *) is 8 bytes 
  
## User-defined data types

+ strutures(reads 8 bytes together)

+ **struct A**
{
    char b;
    int a;
    double d;
    float c;
};
  + sizeof(struct A) is 24 bytes
  
    * sizeof(char)- 4bytes 
    * sizeof(int)- 4bytes
    * sizeof(double)-8bytes
    * sizeof(float)-4bytes + 4bytes(As structure reads 8 bytes together)
  
+ **struct B**
{
    int a;
    char b;
    float c;
    int z;
    double d;
};
  + sizeof(struct B) is 24 bytes
  
     * sizeof(int)- 4bytes
     * sizeof(char)- 4bytes
     * sizeof(float)- 4bytes
     * sizeof(int)- 4bytes
     * sizeof(double)-8bytes
     
+ **struct C**
{
    int m;
    char k[10];
    char l[15];
};
     + sizeof(struct C) is 32 bytes
     * sizeof(int)- 4bytes
     * sizeof char k [10]- 12bytes (4bytes are remained from previous 8bytes + 8bytes = 12bytes) 
     * sizeof char l [15]- 8+8= 16bytes
    

## Constants

* sizeof(10) is 4bytes.
* sizeof('A') is 4bytes.
  + A is consider as int(ascii Value)
* sizeof(12.54) is 8bytes.
  + by default decimal value will be consider as double if we wont mention it as float
* sizeof("likhitha") is 9bytes.
  + 8bytes for 8 characters +  1 bytes for null terminator.
     
