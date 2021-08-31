// In the first line print two space-separated integers, representing the length of  and  respectively.
// In the second line print the string produced by concatenating  and  ().
// In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, except that their first characters are swapped.


#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1,s2;
	getline(cin,s1);
    getline(cin,s2);                // cin>>s1 >> endl  >>s2;
    
    cout<<s1.length()<<" "<<s2.length()<<endl;
    
    cout<<s1+s2<<endl;
    
    char a=s1[0];
    s1[0]=s2[0];
    s2[0]=a;
    cout<<s1<<" "<<s2<<endl;
  
    return 0;
}

