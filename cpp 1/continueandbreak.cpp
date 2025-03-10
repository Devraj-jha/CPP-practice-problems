#include <iostream>
int main()

{
    // break = break out of a loop
    // continue = skip current iteration

    for(int i = 1; i <= 20; i++){
        if(i == 13){
            //break; it basiccally stops the loop
            //continue; it basically skips at certain case
        }
        std::cout << i << '\n';
    }

    return 0;
}