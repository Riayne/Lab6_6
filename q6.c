#include <stdio.h>

int main()
{
    int temp1 = 1,temp2 = 2,result;
    printf("%d\n",temp1);
    printf("%d\n",temp2);
    while (temp2 < 2097152)
    {
        result = temp1 * temp2;
        printf("%d\n",result);
       temp1 = temp2;
       temp2 = result;
    }
    

}