#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
  int n,i,a;
  cin>>n;
  string s;
  vector <string> x;

  for(i=0;i<n;i++)
  {
      cin>>a;
      getline(cin,s);
      getline(cin,s);
       istringstream word(s);
       while(word>>s){x.push_back(s);cout<<s<<endl;}








  }
    return 0;
}
