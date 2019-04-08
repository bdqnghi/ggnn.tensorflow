int main()
{
	char a[101]={0},boy=0,girl=0;//????
	int b[101],i=0,k=0,x=0,n=0,d=0;//??,n?????d???
	for(i=0;i<101;i++)
		b[i]=i;
	for(i=0;;i++)//??
	{
		a[i]=getchar();
		if(a[i]=='\n')
			break;
		n++;
	}
	boy=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]!=boy)
		{
			girl=a[i];
			break;
		}
	}
	d=n/2;
	for(i=0;i<d;i++)
	{
		for(k=0;k<n;k++)
		{
			if(a[k]==boy&&a[k+1]==girl)//???????,???,????????????2?
			{
				cout<<b[k]<<" "<<b[k+1]<<endl;
				for(x=0;x<n-2*i;x++)
				{
					a[k+x]=a[k+x+2];
					b[k+x]=b[k+x+2];
				}
				break;
			}
		}
	}
	return 0;
}