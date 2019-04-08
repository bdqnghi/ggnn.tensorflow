/**
* @file homework.cpp
* @author ???
* @date 2011-10-01
* @description
* ??????: ?7???????
*/
int main()
{
	int n, i, s=0;
	cin>>n;
	if(0<n<100)
	{
	    for(i=1;i<=n;i++)
		{
			if((i%7==0)||(i%10==7)||(i/10==7)) {s=s;}
			else {s=s+i*i;}
		}
	}
	else cout<<"error"<<endl;
	cout<<s<<endl;
return 0;
}