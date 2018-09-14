#include <stdio.h>
#include <stdlib.h>
#define CANT 10

int insertion(int data[],int len);

int main()
{
    int numeros[CANT]={7,3,5,8,0,4,6,9,1,2};
    insertion(numeros,CANT);
    int i;
    for(i=0;i<CANT;i++){
        printf("%d",numeros[i]);
    }

    return 0;
}

int insertion(int data[],int len)
{
     int i,j;
     int temp;
     for(i=1;i<len;i++)
     {
        temp = data[i];
        j=i-1;
        while(j>=0 && temp<data[j])
        {
        data[j+1] = data[j];
        j--;
        }
            data[j+1]=temp;
        }
    return 0;
}
