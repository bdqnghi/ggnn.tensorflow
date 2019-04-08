/*
	name : ??(14-3) ?????? 
	author : 1200012757(chenminhuan)
	Data : 11/04/2012 0:26
*/


int main()
{
	int N,cnt=0;
	int a[500+10];	
	cin>>N;
	
	for (int i = 0 ; i < N ;++i) 	    //??n??
	{		
		cin>>a[i];
		if (a[i]%2)		    //mod 2?1?????
			a[cnt++]=a[i];
	}
	
	sort(a, a+cnt);
	
	for (int i =0 ; i < cnt ; ++i) 
	{
		if (i) cout << ",";
		cout << a[i];
	}
	return 0;
}