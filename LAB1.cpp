/* 
functions in C++
problem statement: make a euclidean distance function in 2d, pythag therom.
a^2 + b^2 =c^2

4. what is a function?
 ????
5. what is distance?
measurable space
6. whho is euclid?
Math Genius
7. why are we doing this?
to learn what a function is
8. what is pythag?
short for pythagourus, who was a arithmetician
9. in the equatin given, what does it mean?
a^2 + b^2 = c^2 right triangle, solving for hyp.
10. what a & b & c?
integers

p': we need to create a function that acts on two points of a two dimensional graph where the function finds the distance 
between these two points. the graph will measeured in integer labeled axis.
The distance will be calculated using euclidean distance (2d), pythag.
to convert points to distance calc values we use the standard method.

standard method : (x,y) (x',y') a= |x' -x|, b = |y' -y|


Q: how might we deal with converting points to distance calc values?

checking language:
1. arithmetic
2. group values (arrays)
3. can use functions

*/

#include<iostream>

using std::cout;
using std:: endl;


int prac() {
    return 0;
}

int prac_inputs(int n, int m) {
    return n+m;
}
int main() {
    int p1[3] = {0,1,3};
    int p2[2] = {4,3};

    cout << p1[0] << endl;

    cout << prac_inputs(20,1) << endl;
    return 0;

}
/* take this code and to make the function a squared plus b squared bla bla bla */