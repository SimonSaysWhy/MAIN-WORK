#include<iostream>
#include<cmath>

using std::abs;
using std::cout;
using std::endl;

int prac() {
    return 40;
}

int prac_inputs(int n, int m) {
    int r = n*n + m*m;
    return r;
}

int a_input(int g[2], int e[2]){
    return e[1];
}

int A(int x[2], int z[2]) {
    return abs(x[0] - z[0]);
}

int main() {
    int p1[2] = {1,2};
    int p2[2] = {4,3};

    // practice variables
    // int x = 20;
    // int k = 1;

    cout << p1[0] << endl;
    cout << prac_inputs(p1[0], p2[0]) << endl;
    cout << a_input(p1, p2) << endl;
    cout << A(p1,p2) << endl;

    return 0;
}