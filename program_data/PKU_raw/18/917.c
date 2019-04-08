int main()
{
	int i,j,k,n,num[101][101],min,he=0,l,r,nn;
	cin>>n;
	nn=n;
	for(nn=n;nn>=1;nn--)
	{
		he=0;
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=n;j++)
	{
		cin>>*(*(num+i)+j);
	}
	}
	for(k=1;k<=n-1;k++)
	{
		min=999999;
		for(l=1;l<=n-k+1;l++)
		{
			min=999999;
			for(i=1;i<=n-k+1;i++)
			{
				if(min>*(*(num+l)+i)) min=*(*(num+l)+i);
				if(min==0) break;
			}
			for(i=1;i<=n-k+1;i++)
			{
				*(*(num+l)+i)=*(*(num+l)+i)-min;
			}
		}
		for(r=1;r<=n-k+1;r++)
		{
			min=999999;
			for(i=1;i<=n-k+1;i++)
			{
				if(min>*(*(num+i)+r)) min=*(*(num+i)+r);
				if(min==0) break;
			}
			for(i=1;i<=n-k+1;i++)
			{
				*(*(num+i)+r)=*(*(num+i)+r)-min;
			}
		}
		he=he+*(*(num+2)+2);
		for(l=1;l<=n-k+1;l++)
		{
			for(i=2;i<=n-k;i++)
			{
				*(*(num+l)+i)=*(*(num+l)+(i+1));
			}
		}
		for(r=1;r<=n-k;r++)
		{
			for(i=2;i<=n-k;i++)
			{
				*(*(num+i)+r)=*(*(num+(i+1))+r);
			}
		}
	}
	cout<<he<<endl;
	}
	return 0;
}