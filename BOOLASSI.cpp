/* I was planning on using cin, which was something taught in my intro class to make this interactive using 1 and 0,
 but i have decide not to because i wouldnt be able to fully explain why it works, 
and we know mindless coding is bad. */
#include <iostream>

using std::cout;
using std::endl;

int main() {
    /* Bool is our boolean data type that holds true or false,
    everything between bool and = are our variable names.
    i have assigned our true or false value to our variables using =.
    ; is used to end our statement.*/
    bool hasGoldenticket  = true;
    bool doesNotHaveGoldenTicket = false;
    bool theFactoryisOpen = true;
    bool hasSpecialPass = true;
   
   
    /*here, if is checking whether the condition inside () is true.
    we are checking if doesNotHaveGoldenTicket is true or false.
    If it is true, the code inside {} will run.
    cout is used here to display our message and endl to end our line.
    */
   if (doesNotHaveGoldenTicket) {
        cout << " You need a Golden Ticket. " << endl;
    }
    /* Now here, we are using else if as our backup to our first if,
    since our first if is false, else if is checked and will run if it is true.
    && is our AND operator, it is used here to say that both of these variables must be true
    for this code to run, which it will. 
    */
   else if (hasGoldenticket && theFactoryisOpen){
        cout << " You may enter my Factory. " << endl;

    }
    /* This is a new if statement, so it is checked sperately from our first if
    and else if.
    || is our OR operator.
    Only one of these conditions needs to be true to run.
    if the person has a golden ticket or special pass,
    the message with cout will be output. 
    */
    if (hasGoldenticket || hasSpecialPass){
        cout << " You are allowed. " << endl;
    }
    
    return 0;
    

}
