// 202610422126
// 杨翼

#include <stdio.h>
#include <stdint.h>

int main()
{
	uint8_t num = 0b00001111;

    printf("%d\n",num);
    
    for (int w = 128; w >= 1; w /= 2) {
        int bit = num / w;
        printf("%d",bit);
        num -= bit * w;
    }

	return 0;
}
