#include<vector>
#include<algorithm>
#include<iostream>
#include<cstdlib>
#include"clock.h"
using namespace std;
void insert_sort(vector<int> &v){
  int a,b;
  for(int next=1;next<v.size();++next) {
    a=v.at(next);
    b=next;
    while((b>0) && (v.at(b-1)>a)) {
      v.at(b)=v.at(b-1);
      --b;
    }
  }
  v.at(b)=a;
}

int main () {
  Clock clk;
  const int size=1000000;
  vector<int> v1(size),v2;
  for(int i=0;i<size;++i) {
    v1.at(i)=random();
  }
  v2=v1;
  clk.start();
  sort(v1.begin(),v1.end());
  cout<<"sort():"<<clk.getElapsedTime()<<" "<<"seconds"<<endl;
  clk.start();
  insert_sort(v2);
  cout<<"insert_sort():"<<clk.getElapsedTime()<<" "<<"seconds"<<endl;
  return 0;
}
