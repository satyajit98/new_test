#include <stdio.h>
int max(int a,int b,int c,int d);

int main() {
    int a, b, c, d;
    int add;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    add=max(a,b,c,d);
    printf("%d", add);
    
    return 0;
}
int max(int a,int b,int c,int d){
int sum;
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                return a;
            }
            else
            {
                return d;
            }
        }
    }
    else if(b>c)
    {
        if(b>d)
        {
            return b;
        }
        else
        {
            return d;
        }
    }
    else if(c>d)
    {
        return c;
    }
    else
    {
        return d;
    }

        return sum;
}