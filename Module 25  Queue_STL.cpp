#include<bits/stdc++.h>
using namespace std;


int main()
{
    queue<int>q;
    //enqueue  O(1);
    q.push(5);
    q.push(10);
    q.push(15);
    //size O(1)

   cout<<"Queue size is::"<<q.size()<<"\n";
   //empty O(1)

   cout<<"Empty check:: "<<q.empty()<<"\n";//empty na takle zero print kore


    //front O(1)
    cout<<q.front() <<"\n";



    //dequeue  O(1)
    q.pop();
    cout<<q.front() <<"\n";
    q.pop();
    cout<<q.front() <<"\n";
    q.pop();
   cout<<"Queue size is::"<<q.size()<<"\n";

    cout<<"Empty check:: "<<q.empty()<<"\n";


    //character use type
    queue<char>q2;
    q2.push('a');
    q2.push('b');
    q2.push('c');

    cout<<q2.front() <<"\n";
    q2.pop();
    cout<<q2.front() <<"\n";
    q2.pop();
    cout<<q2.front() <<"\n";
    q2.pop();

}
