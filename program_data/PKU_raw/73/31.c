
int main()
{   
	int a[5][5],l[5];
	int m,k,i,j,flag=0;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];
	for(j=0;j<5;j++)
	{
		l[j]=a[0][j];
		for(i=0;i<5;i++)
			if(l[j]>a[i][j])
				l[j]=a[i][j];
    }
	for(i=0;i<5;i++)
		{
			m=a[i][0];
			k=0;
			for(j=0;j<5;j++)
				if(a[i][j]>m)
					{
						m=a[i][j];
						k=j;
				}
			if(m==l[k])
				{
					cout<<i+1<<' '<<k+1<<' '<<m<<endl;
					flag=1;
			}

	}
		if(flag==0)
			cout<<"not found"<<endl;
	return 0;
}
