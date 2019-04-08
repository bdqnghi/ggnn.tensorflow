//#include "stdafx.h"

int lena=0;
void cheng(int *a)
{
	for (int i=0;i<lena;i++)
	{
		a[i]=a[i]*2;
		
	}
	for (int i=0;i<lena;i++)
	{
		a[i+1]+=a[i]/10;
		a[i]=a[i]%10;
	}
	if (a[lena]>0) lena++;
	//cout<<lena;
}
int main()
//int _tmain(int argc, _TCHAR* argv[])
{
	int a[10000]={1};
	int n;
	lena=1;
	cin>>n;
	for (int i=0;i<n;i++)
		
	cheng(a);
	for (int i=lena-1;i>=0;i--)
		cout<<a[i];
	cout<<endl;
	
}