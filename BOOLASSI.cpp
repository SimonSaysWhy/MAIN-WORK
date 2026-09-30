/* I was planning on using cin, which was something taught in my intro class to make this interactive using 1 and 0,
 but i have decide not to because i wouldnt be able to fully explain why it works, 
and we know mindless coding is bad. 
i instead used fixed values, so it will be unable to print the false statement unless
i manually change the variable.
but if i made it interactive i could have each print their own. */
#include <iostream>

int main() {
    bool hasGoldenticket  = true;
    bool doesNotHaveGoldenTicket = false;
    bool theFactoryisOpen = true;
    /* bool = Boolean data type that holds true or false
    everything between our bool and = are our variable names
    = assigns a value to the variable 
    ; ends our statments 
    */
/* 
if checks whether a condition is true
() is where out=r condition being checked goes
 || is our OR operator, at least one must be true
 { } starts and ends our if blocks
   */
    if (hasGoldenticket && theFactoryisOpen) {
        std::cout << "You may enter my factory  ";
    }
   else if (doesNotHaveGoldenTicket) {
        std::cout << "You need a Golden Ticket" << std::endl;
/* else if checks another condition if the first if is false
&& is our AND operator, both conditions ,must be true
std::endl ends our line
<< sends std::endl to cout
;ends the statement */
    }
    if (hasGoldenticket || doesNotHaveGoldenTicket){
        std::cout << "your ticket status is checked" << std::endl;
    }
    return 0;
    /*retun returns a value from the function
    0 is the integer returned 
    ; ends the statement */

}
/* way too long trying to change things here, hope its right*/