#include <iostream>

int main()
{
    int seconds (5410);
    int m = seconds / 60 % 60;
    int h = m / 60;
    int s = seconds % 60;
    
    printf("%d h: ", h);
    printf("%d m: ", m);
    printf("%d s ", s);

    return 0;
}