int main()
{
	int a[5][5];
	int i=0,j=0,k=0,l=0,min,max,s=0;
	int b[5],c[5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			cin>>a[i][j];
	}
	for(i=0,k=0,j=0;i<5,k<5;i++,k++,j=0)
	{	
		max=a[i][j];
		b[k]=0;
		for(j=0;j<5;j++)
		{
		
			if (a[i][j]>=max)
			{
				max=a[i][j];
				b[k]=j;
			}
		}
	}
	for(j=0,l=0,i=0;j<5,l<5;j++,l++,i=0)
	{
	    min=a[i][j];
		c[l]=0;
		for(i=0;i<5;i++)
		{
			if(a[i][j]<=min)
			{
				min=a[i][j];
			    c[l]=i;
			}
		}
		
	}
	for(l=0;l<5;l++)
	{
		for(k=0;k<5;k++)
		{
			if(l==b[k])
			{
				if(k==c[l])
				{
					cout<<k+1<<" "<<l+1<<" "<<a[k][l]<<endl;
					s=1;
				}
			}
		}

	}
	if(s==0)
		cout<<"not found"<<endl;
	return 0;
}
