int main()
{
	int n,k,h,i,j,sz[1000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
    for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(sz[i]+sz[j]==k)
			{
				h=1;
			    break;
			}
			if(sz[i]+sz[j]!=k)
				h=0;
		}
		if(h==1)
			break;
	    
	}
    if(h==1)
		printf("yes");
	else
		printf("no");
    return 0;
}

