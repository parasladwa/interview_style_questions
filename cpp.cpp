#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

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












int diagonalDifference(std::vector<std::vector<int>> arr) {
    int rank = 0;
    int other = 0;

    for (int i = 0; i <  arr.size(); i++){
        std::vector<int> element = arr[i];
        int n = arr.size();
        for (int j=0; j<=element.size(); j++){
            if(i == j){
                rank+= element[j];
            }

            if (i == n-1-j){
                other += element[j];
            }
        }
    }
    return abs(rank - other);


}




void plusMinus(std::vector<int>& arr) {

    std::vector<float> totals = {0, 0, 0};
    float n = arr.size();

    for (int i : arr){
        
        if (i < 0){
            totals[1] ++;
        } else if (i ==0 ) {
            totals[2] ++;
        } else {
            totals[0]++;
        }

        }

    
    for (int j : totals){
        std::cout << j/n << "\n";
    }

}

// int main(){
//     std::vector<int> arr = {0, 1, -1};
//     plusMinus(arr);
// }


void staircase(int& n) {
    char space = ' ';
    char tag = '#';
    for (int i=1; i<=n; i++){
        std::cout<< std::string(n-i, space);
        std::cout<< std::string(i, tag) << std::endl;
    }

}

// int main(){
//     int val = 6;
//     staircase(val);
//     return 0;
// }





void miniMaxSum(std::vector<int>& arr) {
    long max = *std::max_element(arr.begin(), arr.end());
    long min = *min_element(arr.begin(), arr.end());
    long long sum = std::accumulate(arr.begin(), arr.end(), 0);
    long out1 = sum-max;
    long out2 = sum-min;
    std::cout<< out1 << " " << out2;
}


int main(){
    std::vector<int> vect = {1, 2, 3, 4, 5};
    miniMaxSum(vect);
    return 0;
}























