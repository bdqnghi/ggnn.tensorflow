int main()
{
	int n,i,j,t[300],s=0,temp,k=0,y=0,d[300];
	float f[100],m,av;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&t[i]);
		s=s+t[i];
	}
	av=(float)s/n;
	for(i=0;i<n;i++)
	{
		if(av>=t[i])
			f[i]=(float)(av-t[i]);
		else
			f[i]=(float)(t[i]-av);
	}
	m=f[0];
	for(i=0;i<n;i++)
	{
		if(m<=f[i])
			m=f[i];
	}
	for(i=0;i<n;i++)
	{
		if(f[i]==m)
		{	k++;
d[k-1]=t[i];
	}
	}
	for(i=0;i<k;i++)
		for(j=k-1;j>i;j--)
		{if(d[i]>d[j])
		{
			temp=d[i];
			d[i]=d[j];
			d[j]=temp;
		}
		}
	for(i=0;i<k;i++)
	{
	
		
			printf("%d",d[i]);
			y++;
			if(y>=1&&y<k)
				printf(",");
		
	}
	return 0;
}