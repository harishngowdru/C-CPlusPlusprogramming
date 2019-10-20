#include <iostream>
#include<string.h>
#include<stdlib.h>
/*Pragma Pack Helps in avoiding structure padding*/
#pragma pack(1) /* To force compiler to use 1 byte packaging */
/*Try Executing program by Commenting above line see the output, By default Structures are padded by compiler*/
using namespace std;

typedef struct
{
    int b1:1;  /* 1 Bit  is allocated */
    int b2:2;  /* 2 Bits is allocated */
    int b3:3;  /* 3 Bits is allocated */
    int b4:4;  /* 4 Bits is allocated */
    int b5:5;  /* 5 Bits is allocated */
    int b6:6;  /* 6 Bits is allocated */
    int b7:7;  /* 7 Bits is allocated */
    int b8:8;  /* 8 Bits is allocated */
}Bitfield;

typedef struct
{
    unsigned int b1:1;
    unsigned int b2:2;
    unsigned int b3:3;
    unsigned int b4:4;
    unsigned int b5:5;
    unsigned int b6:6;
    unsigned int b7:7;
    unsigned int b8:8;
}BitfieldUnsigned;

typedef struct
{
    char x;
    int y;
}test;
typedef struct
{
    char x;
    int y: 1;
}test_1;
typedef struct
{
    int y: 1;
    char x;
}test_2;
int main()
{
    Bitfield         x={1,3,7,0xf,0x1f,0x3f,0x7f,0xff};
    BitfieldUnsigned y={1,3,7,0xf,0x1f,0x3f,0x7f,0xff};
    test t;
	test_1 t1;
	test_2 t2;
    /*Since Integer By default is signed*/
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",x.b1,x.b2,x.b3,x.b4,x.b5,x.b6,x.b7,x.b8);
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",y.b1,y.b2,y.b3,y.b4,y.b5,y.b6,y.b7,y.b8);
	printf("Size of structure is %d\n",sizeof(x));
	printf("Size of structure is %d\n",sizeof(t));
	printf("Size of structure is %d\n",sizeof(t1));
    printf("Size of structure is %d\n",sizeof(t2));

    return 0;
}
