void main()
{
	long int m,n;
	long int oho(int x);
	scanf("%d%d",&m,&n);
	long int i,j,k=0,save[20000],l,x,y=0;
	for(i=m;i<=n;i++)
	{
		if(i==1)
		{
			y++;
			continue;
		}
		else if(i==2)
		{
			save[k]=i;
			k++;
			y++;
		}
		else
		{
			for(j=2;j<=sqrt(i);j++)
			{
				if(i%j==0)break;
			}
			if(j>sqrt(i))
			{
				save[k]=i;
				k++;
			}
			else y++;
		}
	}
	long int r=0;
	for(l=0;l<k;l++)
	{
		if(oho(save[l])==save[l])
		{
			printf("%d",save[l]);
			break;
		}
		else r++;
	}
    if(r==k)printf("no");
	for(x=l+1;x<k;x++)
	{
		if(oho(save[x])==save[x])
		{
			printf(",%d",save[x]);
		}
	}
}
long int oho(int x)
{
	int r,c=0;
	while(x>=1)
	{
		r=x%10;
		x=x/10;
        c=c*10+r;
	}
	return(c);
}