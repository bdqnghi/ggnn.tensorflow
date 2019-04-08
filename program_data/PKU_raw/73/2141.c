int main()
{
	int a[10][10],i,j,t,max,k,l,w=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			cin>>a[i][j];
		}

	}
	for(i=1;i<=5;i++)
	{
		max=-1;
		l=0;
		for(j=1;j<=5;j++)
		{
			if(a[i][j]>max){t=j;max=a[i][j];}
		}
		for(k=1;k<=5;k++)
		{
			if(a[k][t]<max){l=1;}
		}
		if(l==0){cout<<i<<" "<<t<<" "<<max<<endl;w=1;}
	}
	if(w!=1)cout<<"not found";
	return 0;
}