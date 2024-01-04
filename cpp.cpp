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

// int main(){ 
//     std::vector<int> ar = {1, 2, 3, 4, 10, 11};
//     simpleArraySum(ar);
// }



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

// int main(){ 
//     std::vector<int> a = {5, 6, 7};
//     std::vector<int> b = {3, 6, 10};
//     std::vector<int> net = compareTriplets(a, b);

//     std::cout << net[0] <<  " "  <<  net[1];
// }


long aVeryBigSum(std::vector<long>& ar) {
    long int sum = 0;
    
    for(int i: ar){
        sum += i;
    }
    std::cout << sum;
    return sum;
}

// int main(){
//     std::vector<long> ar = {1000000001, 1000000002, 1000000003, 1000000004, 1000000005};
//     aVeryBigSum(ar);
// }












int diagonalDifference(std::vector<std::vector<int>>& arr) {
    int sum = 0;

    for (int i = 0; i <  arr.size(); i++){
        std::vector<int> element = arr[i];
        
        for (int j=0; j<=element.size(); j++){
            if(i == j){
                sum+= element[j];
                std::cout << sum << " ";
            }
        }
    }
    return sum;



}



int main(){
    std::vector<std::vector<int>> v {{1, 0, 1}, {0, 1, 0}, {1, 0, 1}};
    diagonalDifference(v);
}