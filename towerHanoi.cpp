#include <iostream>
using namespace std;

int towerHanoi(int n, int from, int to, int mid){ 
    if(n == 1){ 
        cout <<"move from " << from << " to " << to << endl; 
    }
    else{ 
        towerHanoi(n - 1, from, mid, to); 
        cout <<"move from " << from << " to " << to << endl; 
        towerHanoi(n - 1, mid, to, from); 
    }
    return 0;
}

int main(){
    int num;
    cout << "Input the plate number of hanoi ? ";
    cin >> num;
    towerHanoi(num, 1, 3, 2);
}