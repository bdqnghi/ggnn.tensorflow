int main()
{
	int a[300]={0},n[300],m[300],i,j,b,k=0,x=0,y=0;
	for(i=0;;i++)
	{
		k=k+1;
		scanf("%d%d",&n[i],&m[i]);
		if(n[i]==0&&m[i]==0)break;
	}
	for(b=0,x=0,y=0;;b++)
	{
		x=0;
		for(i=0;;i++)
		{
			if(a[i]==0)	
			{
				x=x+1;
				if(x==m[b]){a[i]=1;x=0;}
			}
			if(i==n[b]-1)i=-1;
			for(j=0,y=0;j<n[b];j++)
			{
				y=y+a[j];
			}
			if(y==n[b]-1)break;
		
		
		}
	
		for(i=0;i<n[b];i++)
		{
			if(a[i]==0)
			{
				printf("%d\n",i+1);
				break;
			}
		}
		for(i=0;i<300;i++)a[i]=0;
	
		if(n[b+1]==0&&m[b+1]==0)break;
	}
	return 0;
}
