#include <iostream>


int main()
{
    int t {5400};
    int t_min {(t / 60)%60};
    int t_h {t / 3600};

   
    
    printf("%d h ", t_h);
    printf("%d min", t_min);
    return 0;
}