// vectors
// vecrors simillar to arrays 
// array - contigious memorty allocation
// vector - dynamic memory allocation(change the memory)

#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v){
    cout<<"size:"<< v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }
    
}

int main(){
// vector<int> v;
// int n;
// cin>>n;
// for(int i =0; i<n; ++i){

//     int x;
//     cin>>x;
//     v.push_back(x);
// }
// printvec(v);


// vector<int> v(7,3); // output =  3 3 3 3 3 3 3 
// v.push_back(10); // output = 3 3 3 3 3 3 3 10
// printvec(v);
// v.pop_back(); // output = 3 3 3 3 3 3 3
// printvec(v);

vector<int> v;
v.push_back(1);
v.push_back(2);
vector<int> v2 =v; // v2 is copy of v but if you are chaning the v2 then there is no change in v         TC=0(N)
v2.push_back(3);
 printvec(v);
 printvec(v2);

}