int main()
{
	char a[100]={0};//????
	int m[100]={0},i,j,k,n,s=0,l;//???????
	cin.get(a,100);//??????
	l=strlen(a);//???????
	m[0]=0;//?m[0]=0
	for(i=0,j=1;i<100;i++)
	{
		if(a[i]==32)
		{
			m[j]=i;//??a[i]????m[j]=i
		    j=j+1;//j=j+1
		}
	
	}
	if(j>1)//??j>1
	{
		for(k=m[j-1]+1;k<=l-1;k++)
			if(a[k]>=65&&a[k]<=122)
				cout<<a[k];//??a[k]??????
		cout<<" ";//????
	}
	if(j==1)//??j=1
	{
		for(k=0;k<=l-1;k++)
			if(a[k]>=65&&a[k]<=122)
				cout<<a[k];//??a[k]
	}
    for(n=j-2;n>=1;n--)
	{
		for(k=m[n];k<=m[n+1];k++)
			if(a[k]>=65&&a[k]<=122)
			  cout<<a[k];//??a[k]??????
		cout<<" ";//????
	}
	for(k=m[0];k<=m[1]-1;k++)
		if(a[k]>65&&a[k]<=122)
		    cout<<a[k];//??a[k]??????
	return 0;
}