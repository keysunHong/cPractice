#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* 
        test print 
        %d对应int
        %s对应字符串
        %f对应的是double和float
        %7.2f待打印的数至少占7个字符位，并保留2位小数（四舍五入）
    */
    printf("%d is %s", 0, "zero");
    printf("\n");
    printf("%6.2f is %s\n", 2456.556, "one hundred and twenty-three thousand four hundred and fifty-six point five five six");
    printf("---------------------------------------------\n");
    
    printf("%7.2f %7.2f | %2.2f %2.2f\n", 2456.56, 2456.556, 2456.56, 2456.556);
    printf("%7.2f %7.2f | %2.2f %2.2f\n", 3.51, 0.556, 3.51, 0.556);
    printf("%7.2f %7.2f | %2.2f %2.2f\n", 55.56, 32.556, 55.56, 32.556);

    return 0;
}
