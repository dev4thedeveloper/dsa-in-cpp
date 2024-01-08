#include <bits/stdc++.h>
using namespace std;

int main(){
    /* 
    //Write a program that takes an input of age and prints if you are adult or not
    // >=18, yes
    // < 18, no
    int age;
    cin >> age;
    if(age>=18){
        cout << "You are an adult!";
    }else if(age<10){
        cout << "You are a kid";
    }else{
        cout << "You are a teenager";
    } 
    */

   /*
    // A school has following rules for grading system:
    // a. Below 25 - F
    // b. 25 to 44 - E
    // c. 45 to 49 - D
    // d. 50 to 59 - C
    // e. 60 to 79 - B
    // f. 80 to 100 - A
    int marks;
    cin >> marks;
    if (marks<25)
    {
        cout << "F";
    }
    else if (marks<=44)
    {
        cout << "E";
    }else if (marks<=49)
    {
        cout << "D";
    }else if (marks<=59)
    {
        cout << "C";
    }else if (marks<=79)
    {
        cout << "B";
    }
    else
    {
        cout << "A";
    }
    */

   /* Take the age from the user and then decide accordingly
    1. If age < 18,
        print-> not eligible for job
    2. If age >=18 and age <=54,
        print-> "eligible for job"
    3. If age >=55 and age <= 57,
        print-> "eligible for job, but retirement soon."
    4. If age > 57
        print-> "retirement time"
   */
  int Age;
  cin >> Age;
  if(Age < 18){
    cout << "not eligible for job";
  }
  // >=18
  else if(Age <= 57 ){
    cout << "eligible for job";
    if(Age>=55){
        cout << ", but retirement soon";
    }
  }
  else{
    cout << "retirement time";
  }
    return 0;
}