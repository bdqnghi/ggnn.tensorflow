/**
 *???6.cpp
 *??????
 *????????
 *???10.12.29
 */
int main()
{
	int a[1000],b[1000],c[1000]={0};         //a,b,c?????????????????
	int i,j,n=0,max=0; 
	char s;
	for(n=0;;n++)
	{  
		cin>>a[n]; 
		s=cin.get();
	    if(s=='\n')
		      break;
	}
	for(n=0;;n++)
	{  
		cin>>b[n]; 
		s=cin.get();
	    if(s=='\n')
		      break;
	}
	for(i=0;i<n+1;i++)
	{
		for(j=a[i];j<b[i];j++)
		{
			c[j]++;
			if(c[j]>max)
				max=c[j];
		}
	}
	cout<<n+1<<' '<<max<<endl;
	return 0;
}