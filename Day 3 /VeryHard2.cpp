#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int candy(vector<int>& ratings) {
    int n = ratings.size();
    vector<int> candies(n, 1);

    
    for (int i = 1; i < n; i++) {
        if (ratings[i] > ratings[i - 1]) {
            candies[i] = candies[i - 1] + 1;
        }
    }

    
    for (int i = n - 2; i >= 0; i--) {
        if (ratings[i] > ratings[i + 1]) {
            candies[i] = max(candies[i], candies[i + 1] + 1);
        }
    }

    
    int total_candies = 0;
    for (int candy : candies) {
        total_candies += candy;
    }

    return total_candies;
}

int main() {
    
    vector<int> ratings = {1, 0, 2};

    
    cout << "Minimum candies required: " << candy(ratings) << endl;

    return 0;
}
