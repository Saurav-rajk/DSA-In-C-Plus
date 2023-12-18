#include <iostream>
using namespace std;

void towerOfHanoi(int n, char s, char a,char d)
{
if (n == 1) {
cout << "Move disk " << n << " from rod " << s<< " to rod " << d << endl;
return;
}
towerOfHanoi(n - 1, s, d, a);
cout << "Move disk " << n << " from rod " << s<< " to rod " << d << endl;
towerOfHanoi(n - 1, a, s, d);
}

int main()
{
int n;
cout<<"Enter the no. of disks: ";
cin>>n;
cout<<"\nTowers of Hanoi solution: "<<endl;
towerOfHanoi(n, 'A', 'B', 'C');
return 0;
}


