// Pairs and Vectors: C++ STL Tutorial for Beginners | Competitive Programming Course
// Date: 2021 09 07
 #include<bits/stdc++.h>
 using namespace std;
 int main(){
/*
    pair<int , string > p; // creating pair p with two 
    //two ways to assign the values to pair
    p = make_pair(2, "abc"); // assigning values to pair
    p = {3, "hello"}; // assigning values to pair
    cout<<p.first<<" "<<p.second<<endl; // printing pair values
*/

pair<int ,int > p_arr[3];
 p_arr[0]= {0,1};
 p_arr[1]= {2,3};
 p_arr[2]= {4,5};
 swap(p_arr[2],p_arr[0]);
for (int i = 0; i < 3; ++i)
{
    cout<< p_arr[i].first <<" "<<p_arr[i].second<<endl;
}

 }
