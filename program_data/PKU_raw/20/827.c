int main()
{
	char a[11];
	char b[4];
	char max;
	int i=0,j=0,k=0,m=0,y=0,temp;
	for(i=0;i<11;i++)
	{
		a[i]='\0';
	}
	while(cin>>a)
	{
		temp=0;
	    cin>>b;
	    max=a[0];
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]>max)
			{
				max=a[j];
			    temp=j;
			}
		}
		for(k=0;k<=temp;k++)
		{
			cout<<a[k];
		}
		for(m=0;m<3;m++)
		{
			cout<<b[m];
		}
		for(y=temp+1;y<strlen(a);y++)
		{
			cout<<a[y];
		}
		cout<<endl;
	}
	return 0;
}