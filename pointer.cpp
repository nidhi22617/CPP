#include <iostream>
using namespace std;

int main(){
    // int life;
    // life = 4;
    // int card;
    // card = 40;
    // int my_card = card;
    // int *myp;
    // myp = &card;
    // my_card = *myp; // pointer dereference.
    // printf("value of card is: %d\n", my_card);
    // printf("value of card is: %p\n", myp);
    // printf("value of card is: %d\n", my_card);


    int score = 200;
    int *myp = &score;

    printf("Value of score is %d\n", score);
    printf("Value of score is %p\n", myp);

    int &another_score = score;
    another_score = 800;
   printf("Value of score is %d\n", score);
    printf("Value of score is %p\n", myp);  


    return 0;
}