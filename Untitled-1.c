#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,k;
    int num;
    for(i=1;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            for(k=0;k<9;k++)
            {
                num = i*100+j*10+k;
                if(i*i*i+j*j*j+k*k*k == num)
                    printf("%d\n",num);
            }
        }
    }
    system("pause");
}
