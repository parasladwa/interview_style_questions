#include <iostream> 
#include <cstdlib>
#include <ctime>


int random(max){
    int t = time(0);
    srand(t);
    int random_int = 1 + (rand()%100);
    return random_int;
}





int main(){

    int max = 100;


    int count = 0;


    int random = random(max);
    std::cout<< random << std::endl;

    return 0;
}

