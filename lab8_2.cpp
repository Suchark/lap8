#include<iostream>
#include<string>
using namespace std;

int main(){
string name, id , movie1 , day, you;
int gear;


cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
getline(cin , name);
cout << "?????: Fahsai: Wow!!! " << name << " is a really cool name." << endl;
cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
cout << name << ": ";
getline(cin, id);

gear = ((id[0]-48)*10 + id[1]-48)- 12;

cout << "Fahsai: I think you may be GEAR "<< gear << ". I have a free movie ticket for you."<< endl;
cout << "Fahsai: Let's go to the cinema together!!!"<< endl;
cout << "Fahsai: What movie do you want to watch?"<< endl;
cout << name << ": ";
getline(cin, movie1);

cout << "Fahsai: So....which day are you free to go with me?"<< endl;
cout << name << ": ";
getline(cin, day);
cout << "Fahsai: " << day <<"....that is OK!!! I'm looking forward to watching " << movie1 << " with you."<< endl;
cout << name << ": ";
getline(cin, you);
cout << "Fahsai: 555+ see you "<< day <<". Bye Bye" << " \\(^ ^)/";

}