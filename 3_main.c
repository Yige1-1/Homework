// 杨翼
// 202610422126

#include <stdio.h>

int main()
{
	float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    if ((a+b+c - max) > max) {
        printf("能构成三角形");
    } else {
        printf("不能构成三角形");
    }

	return 0;
}
