#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

template<typename T>
void printV(const vector<T>& v){
    for (auto elem :v)   
        cout<<elem<<" "; 
        cout<<endl;
}
int main(){
 vector<int> vi{1,3,5,6};
 vector<int> vi2(10,1);
 vector<double> vd(10);
vector<char> vc(5,'a');
 printV(vi2);
 printV(vd);
 printV(vc);
 vi.reserve(20);
 cout<<"vi.size="<<vi.size()<<", capacity="<<vi.capacity()<<endl;
 cout<<"Is vi empty?"<<boolalpha<<vi.empty()<<endl;
 for (int i = 0; i <= vi.size(); i++)
     cout<<2*vi.at(i)<<" ";
     cout<<endl;
     for (auto it=vi.begin();it< vi.end();it++)  {  
         *it=*it*2;
         cout<<*it<<endl;
     }   
 
 printV(vi);
}