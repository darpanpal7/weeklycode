#include <iostream>
using namespace std;

int main() {
    int n, k;
    //taking inputs
    cin>>n;
    cin>>k;
    int answer = 0;
    int page = 1;
    
    //checking for each value of chapter
    for(int chapter = 1; chapter <= n; ++chapter) {
        int problems;
        cin>>problems;
        for(int index = 1; index <= problems; ++index) {
            if(index == page)
                answer++;
            if(index == problems || index % k == 0)
                ++page;
        }
    }
    //printing answer
    cout<<answer<<endl;
    return 0;
}