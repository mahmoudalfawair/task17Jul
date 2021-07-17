#include<iostream>
using namespace std;
int main()
{
float yplusplus;
float y;
cin >> yplusplus ;
cin >> y ;
float result = yplusplus - y;
if(yplusplus >y)
cout << "your profit about :" << result << endl;
else 
cout << "There is a loss of value about :" << -1*result << endl;
 
return 27;
}
