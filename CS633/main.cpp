#include <bits/stdc++.h>;
using namespace std;
typedef long long ll;
#define c_yes (cout<<"YES"<<endl);
#define c_no (cout<<"NO"<<endl);
#define el endl
#define stop break;
#define Faster ios::sync_with_stdio(0);cout.tie(0);cin.sync_with_stdio(0);cin.tie(0);
#define tt \
ll t;\
cin >> t;\
while(t--)


// increase
#include <iostream>
using namespace std;
struct student {
    int id;
    char name[69];
};
int main ()
{
    int n;cin>>n;
    student* arr;
    arr = new (nothrow) student[n];
    for (int i = 0; i < n; ++i) {
        while (true){
            bool flag = true;
            cin>>arr[i].id>>arr[i].name;
            for (int j = 0; j < i; ++j) {
                if (arr[i].id == arr[j].id) {
                    cout<<"id already exists , enter another one"<<endl;
                    flag = false;
                    break;
                }
            }
            if (flag) break;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout<<arr[i].id<<" "<<arr[i].name<<endl;
    }
    delete[] arr;



}




/*
    What is Pointer ?

===> int x = 5 , it creates some place in memory which has address ,
    code : `cout << &x` will print address (returns hexadecimal value) // قولتلو اطبعلي
    another example : code:
    `int arr[4];
    cout << arr
    will print the address of first_element`
    but if arr is char will print all the string


    Task:
        create a struct named student with id , name
        initialize student_type array
        input values in array
        print it
        unique id , name

 */