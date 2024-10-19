#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x>y)
        {
            printf("car\n");
        }
        else if(y>x)
        {
            printf("bike\n");
        }
        else {
            printf("same\n");
        }
    }
	// your code goes here
	return 0;
}

