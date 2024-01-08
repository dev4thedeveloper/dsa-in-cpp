#include <bits/stdc++.h>
using namespace std;
// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> which does not returns anything
// return
// parametrised
// non-parametrised

void printName(string name)
{
    cout << "Hey " << name << "!";
}

int sum(int num1, int num2)
{
    return num1 + num2;
}

int max(int num1, int num2)
{
    // 5 >= 6
    if (num1 >= num2)
    {
        return num1;
    }
    return num2;
}

// pass by value -> Performing operations on Duplicate copy of variable
void doSomething_pass(string s){
    s[0] = 't';
    cout << s << endl;
}


// pass by refrence -> Performing operations on Original variable
void doSomething_ref(int &num){
    cout << num << endl;
    num+=5;
    cout << num << endl;
    num+=5;
    cout << num << endl;
}

int main()
{
    /*
    string name;
    cin >> name;
    printName(name);

    string name2;
    cin >> name2;
    printName(name2);
    */

    /*
    int num_1, num_2, ans;
    cin >> num_1 >> num_2;
    ans = sum(num_1,num_2);
    cout << "Ans : " <<ans;
    */

   /*
   int num_1, num_2, ans;
    cin >> num_1 >> num_2;
    int ansMax = max(num_1, num_2);
    cout << ansMax;
   */
    
    /*
    string s = "raj";
    doSomething_pass(s);
    cout << s << endl;
    */

    int num = 10;
    doSomething_ref(num);
    cout << num << endl;

    return 0;
}