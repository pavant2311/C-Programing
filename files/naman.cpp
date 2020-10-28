

#include<bits/stdc++.h> 
#define N 40
using namespace std;


void sum(int*p, int n, const vector<int> d){

int i;
*p = 0;
for(i = 0; i < n; ++i)
*p = *p + d[i];
}

int main(){

int i;
int accum = 0;
//int data[N];
vector<int> data;

for(i = 0; i < N; ++i)
data.push_back(i);

sum(&accum, N, data);
cout<<"Sum is:"<<accum<<endl;

return 0;
}
