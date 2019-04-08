int n,i,j,k,l,len=0,sum=0;
int array[100][100];
void guilinhang(int a)
{
	int min=array[a][0];
	for(l=0;l<len;l++)
	{
		if(array[a][l]<min)
			min=array[a][l];
	}
	for(l=0;l<len;l++)
		array[a][l]=array[a][l]-min;
}
void guilinlie(int a)
{
	int min=array[0][a];
	for(l=0;l<len;l++)
	{
		if(array[l][a]<min)
			min=array[l][a];
	}
	for(l=0;l<len;l++)
		array[l][a]=array[l][a]-min;
}
void xiaojian(int a)
{
	if(a==2)
		return;
	else if(a>2)
	{
		for(i=1;i<a-1;i++)
		{
			for(j=0;j<a;j++)
				array[j][i]=array[j][i+1];
		}
		for(i=1;i<a-1;i++)
		{
			for(j=0;j<a;j++)
				array[i][j]=array[i+1][j];
		}
	}
}
int main()
{
	cin>>n;
	for(k=0;k<n;k++)
	{
		len=n;
		sum=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>array[i][j];
			}
		}
		while(len>=2)
		{
		    for(i=0;i<len;i++)
		    {
			    guilinhang(i);
		    }
		    for(i=0;i<len;i++)
		    {
		    	guilinlie(i);
		    }
		    sum=sum+array[1][1];
		    xiaojian(len);
		    len--;
		}
		cout<<sum<<endl;
	}
	return 0;
}
