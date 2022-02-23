#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std ;
int GenerateRandomNumber(){
    return rand () %100+1;
}
int GetPlayerGuess(){
    int guess;
    cin>>guess;
    return guess;
}
void PrintAnswer(int guess,int Number){
    if(guess>Number){
        cout<<"Your guess is too big :(.Try again"<<endl;
    }
    else if (guess<Number){
        cout<<"Your guess is too small :(.Try again"<<endl;
    }
    else cout<<"Congratulation!! You win"<<endl;

}
int main (){
    srand(time(0));
    int Number;
    Number = GenerateRandomNumber();
    int guess;
    do{
        cout<<"Your guess is:";
        guess = GetPlayerGuess();
        PrintAnswer(guess,  Number);

    }
    while (guess!=Number);
}
