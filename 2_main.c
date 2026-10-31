#include <stdio.h>

int main()
{
	float a;
    scanf("%f",&a);

    if (a < 0) {
        printf("负数");
    } else if (a > 0) {
        printf("正数");
    } else {
        printf("零");
    }
	return 0;
}