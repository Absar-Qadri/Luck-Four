#include <iostream>
using namespace std;
int count(int nums)
{
    int dig,ct=0;
    while(nums>0)
    {
        dig=nums%10;
        if(dig==4)
        {
            ct++;
        }
        nums=nums/10;
    }
    return ct;
}

int main() {
	int n;
	int cnt;
	cin>>n;
	int nums;
	for(int i=0;i<n;i++)
	{
	    cin>>nums;
	    cout<<count(nums)<<endl;
	}
	
	
	return 0;
}
