#include <iostream>

int main()
{
    int a (7);
    int b (4);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d ", a);
    printf("%d", b);
  
    return 0;
}