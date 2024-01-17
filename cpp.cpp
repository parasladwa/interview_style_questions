#include <iostream>
#include <vector>



int simpleArraySum(const std::vector<int>& ar) {
    int total = 0;
    for (int i : ar) {
        total += i;
        std::cout << total ;
    }

    return 0;
}
/* 
int main(){ 
    std::vector<int> ar = {1, 2, 3, 4, 10, 11};
    simpleArraySum(ar);
}
*/




std::vector<int> compareTriplets(const std::vector<int>& a, const std::vector<int>& b) {

    std::vector<int> net = {0, 0};

    for (int i =0; i <= a.size(); i++){
        
        if (b[i] > a[i]){

            net[1]++;

        } else if (b[i] < a[i]) {

            net[0]++;

        } else {

        }

        }
    
    return net;
}






