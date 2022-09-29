#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> q;

    q.push(11);
    q.push(15);
    q.push(13);
    q.push(13);

    cout << "size of queue is : "<<q.size() << endl;

    return 0;
}



