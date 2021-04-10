/* Increment and Decrement Operators:
i++ => i increased by 1(Pehle print phir increment )
i-- => i is reduced by 1(Pehle print phir decrement)
++i => i is increased by 1(Pehle increment phir print)
--i => i is reduced by 1(Pehle decrement phir print)
+++ Operator Does not exist.
+= is a compound assignment operator also -= , *= , /= , %= */
#include <stdio.h>
int main() {
    int i=5;
    printf("The value after i++ is %d\n", i++);// i++ pehle print karo phir increment karo. ++i is pehle increment karo phir print karo.
    printf("The value of i is %d\n", i);
    i+=10;// Increments i by 10
    printf("The value of i is %d\n", i);
    return 0;
}
