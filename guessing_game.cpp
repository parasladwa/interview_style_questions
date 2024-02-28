#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <vector>


int rng(int max){

    int t = time(0);
    srand(t);
    int random_int = 1 + (rand()%100);
    return random_int;

}


int game_first(){

    int max = 100;
    int count = 0;
    int rand = rng(max);
    int guess = -1;


    std::cout << "the number is " << rand << std::endl;
    std::string condition = "";

    
    while (guess != rand) {

        std::cout << "enter a " << condition << " guess : ";
        std::cin >> guess;
        count ++;

        if (guess > rand){
            condition = "lower";
        }

        else{
            condition = "higher";
        }

    }

    std::cout << "yes the number was " << rand ;
    std::cout << ", it took " << count << " guesses." << std::endl;

    return count;
}



bool checker(std::vector<int>& list, int guess){
    bool cond = false;
    for(int i = 0; i< list.size(); i++){
        if (list[i] == guess){
            cond = true;
        }
    }
    return cond;
}



int game_second(){
    
    int max = 100;
    std::vector<int> guesses = {};
    int rand = rng(max);
    int guess = -1;
    std::string condition = "";

    while (checker(guesses, rand)) {
        std::cout << "enter a guess :";
        std::cin >> guess;
        if(guess > rand){
            condition = "lower";
        }
        else{
            condition = "higher";
        }
    }
    
    return 0;
}









int main(){
    game_second();
}