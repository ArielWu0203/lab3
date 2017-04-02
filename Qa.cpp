#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>
using namespace std;

int main() {
  ifstream In("file.in",ios::in);
  int num,sum=0;
  In>>num;
  vector<int> v(num);
  int i;
  for(i=0;i<num;i++) {
    In>>v.at(i);
  }
  sort(v.begin(),v.end());
  for(i=num-5;i<num;i++) {
    sum+=v.at(i);
  }
  cout<<sum<<endl;
  return 0;
}
