#include<iostream>
#include<vector>
#include<chrono>
using namespace std;
void case2(int n);



 

void case2(int n)
{
 std::vector<int> v(n);
  for (int i=0; i<v.size() ; i++)
  {
    v[i]=i;
  }
v.reserve(n+100);
auto start1 = std::chrono::steady_clock::now();
v.push_back(10000);
v.push_back(10000);
v.push_back(10000);
v.push_back(10000);
v.push_back(10000);
v.push_back(10000);
v.push_back(10000);
v.push_back(10000);
v.push_back(10000);
v.push_back(10000);


auto end1 = std::chrono::steady_clock::now();
auto elapsed1 =std::chrono::duration_cast<std::chrono::nanoseconds>(end1-start1);

auto start2=std::chrono::steady_clock::now();
v.insert(v.begin(),1);
v.insert(v.begin(),1);
v.insert(v.begin(),1);
v.insert(v.begin(),1);
v.insert(v.begin(),1);
v.insert(v.begin(),1);
v.insert(v.begin(),1);
v.insert(v.begin(),1);
v.insert(v.begin(),1);
v.insert(v.begin(),1);

auto end2=std::chrono::steady_clock::now();
auto elapsed2=std::chrono::duration_cast<std::chrono::nanoseconds>(end2-start2);

auto start3=std::chrono::steady_clock::now();
bool d=true;
for (int i=0;i<v.size();i++)
{
 if (v[i]==-1)
 {d=true;
break;}
 else {d=false;}
}
auto end3=std::chrono::steady_clock::now();
auto elapsed3=std::chrono::duration_cast<std::chrono::nanoseconds>(end3-start3);

std::cout<<"PUSH BACK time is "<<elapsed1.count()/10<<" nanoseconds\n";
std::cout<<"INSERT time is "<<elapsed2.count()/10<<" nanoseconds\n";
std::cout<<"SEARCH time is "<<elapsed3.count()<<" nanoseconds\n";
std::cout<<d;}


int main()
{
    std::cout<<"CASE 1\n";
    case2(1000);
    std::cout<<"CASE 2\n";
    case2(100000);
    std::cout<<"CASE 3\n";
    case2(1000000);
   
}




