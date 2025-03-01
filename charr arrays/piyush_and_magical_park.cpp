#include<iostream>
using namespace std;


void magical_park(char a[][100],int n,int m,int k,int s)
{
	bool success = true;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			char curr = a[i][j];
			if(s<k)
			{
				success = false;
				break;
			}
			if(curr=='*')
			{
				s += 5;
			}
			else if(curr=='.')
			{
				s -= 2;
			}
			else
			{
			
				break;
			}
			// otherwise whenever we take a one step forward the strengthe will be decreased by 1 except for the last cell of the row
			if(j!=m-1)
			{
				s -=1;
			}
		}
	}

	if(success)
	{
		cout<<"Yes"<<endl;
		cout<<s;
	}
	else{
		cout<<"No"<<endl;
	}

}


int main() {
	int n,m,k,s;
	cin>>n>m>>k>>s;
	char park[100][100];
	for(int i=0;i<n;i++)
	{
		for(int j= 0;j<m;j++)
		{
			cin>>park[i][j];
		}
	}
	magical_park(park,n,m,k,s);
	return 0;
}