/*************************************************************************
    > File Name: practice_18.c
    > Author: 21Q017
    > Mail: 905505155@qq.com 
    > Created Time: 2022年04月03日 星期日 14时59分05秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

dataType functionName(const unsigned char *Key,unsigned char *Data,int BlockCount){
    unsigned int y,z.sum,i;
    unsigned int delta;
	delta = 0x9e3779b9;
    unsigned int a,b,c,d; 

    a = (unsigned int)((Key[0] << 24) | (Key[1] << 16) | (Key[2] << 8) | Key[3])
    b = (unsigned int)((Key[4] << 24) | (Key[5] << 16) | (Key[6] << 8) | Key[7])
    c = (unsigned int)((Key[8] << 24) | (Key[9] << 16) | (Key[10] << 8) | Key[11])
    d = (unsigned int)((Key[12] << 24) | (Key[13] << 16) | (Key[14] << 8) | Key[15])

    for i in range (0, BlockCount):
        sum=0xC6EF3720;
        y = (unsigned int)((Data[i*8 + 0] << 24) | (Data[i*8 + 1] << 16) | (Data[i*8 + 2] << 8) | Data[i*8 + 3]);
        z = (unsigned int)((Data[i*8 + 4] << 24) | (Data[i*8 + 5] << 16) | (Data[i*8 + 6] << 8) | Data[i*8 + 7]);
        for j in range(0, 32):
            z -= ((y<<4) + c) ^ (y + sum) ^ ((y>>5) + d)
            y -= ((z<<4) + a) ^ (z + sum) ^ ((z>>5) + b)
            sum -= delta 

        Data[i*8 + 0] = (unsigned char)((y >> 24) & 0xFF)
        Data[i*8 + 1] = (unsigned char)((y >> 16) & 0xFF)
        Data[i*8 + 2] = (unsigned char)((y >> 8) & 0xFF)
        Data[i*8 + 3] = (unsigned char)((y >> 0) & 0xFF)

        Data[i*8 + 4] = (unsigned char)((z >> 24) & 0xFF)
        Data[i*8 + 5] = (unsigned char)((z >> 16) & 0xFF)
        Data[i*8 + 6] = (unsigned char)((z >> 8) & 0xFF)
        Data[i*8 + 7] = (unsigned char)((z >> 0) & 0xFF)
    return 0
}

int mian(){
    unsigned char i;
    const unsigned char key[16];
    unsigned char buf[32];
	key = {0x00,0x01,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0a,0x0b,0x0c,0x0d,0xe,0xf,0x00};
	buf = {0x95, 0x9d, 0x57, 0xba, 0x3a, 0x97, 0x76, 0xfc, 0x00, 0x4c, 0x83, 0x17, 0x25, 0x9b, 0xf1, 0xd6, 0xa2, 0xe2, 0xfc, 0x83, 0xe1, 0xa6, 0xc1, 0xce, 0xa0, 0xeb, 0xbe, 0xca, 0xde, 0x77, 0xfd, 0x8e};

    if decrypt(key,buf,4) == 0x0 :
        for i in range(0,32):
            msgbox(buf[i]) 
        msgbox("\n")
    return 0;
}

