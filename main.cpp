#include <iostream>
#include <cstdio>
#include <cstring>
#define max 10000
using namespace std;
int main()
{
    int a[max],b[max],c[max],i,j,x,lena,lenb,lenc;
    char a1[max],b1[max];
//   将整型数组全部清空
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
//  从键盘输入两个字符数组
    gets(a1);
    gets(b1);
//   求字符数组的长度
    lena = strlen(a1);
    lenb = strlen(b1);

//   字符数组转换为整型数组
    for (i=0;i<lena;i++)
        a[i] = a1[lena-i-1] - '0';
    for (i=0;i<lenb;i++)
        b[i] = b1[lenb-i-1] - '0';

    lenc=0;
    for(i=0;i<lena;i++)
    {
        x=0;
        for (j=0;j<lenb;j++)
        {
            c[i+j] = c[i+j]+x+a[j]*b[i];
            x = c[i+j]/10;
            c[i+j] = c[i+j]%10;
        }
        c[i+lenb] = x;
    }
    lenc = lena+lenb;
    while (c[lenc]==0) lenc--;
    for (i = lenc; i >=0 ; i--)
        cout<<c[i];
        cout<<endl;

}
