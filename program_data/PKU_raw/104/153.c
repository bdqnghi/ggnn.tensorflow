void main()
{
	int x,y,a[1000],b[1000],i,j,mx,my,flag=0;
	scanf("%d %d",&x,&y);
	*a=x;
	for(mx=1;mx<1000;mx++)
	{
		*(a+mx)=*(a+mx-1)/2;
        if(*(a+mx)==0) break;
	}
	*b=y;
	for(my=1;my<1000;my++)
	{
		*(b+my)=*(b+my-1)/2;
        if(*(b+my)==0) break;
	}
	for(i=0;i<=mx;i++)
	{
		for(j=0;j<=my;j++)
		{
			if(*(a+i)==*(b+j))
			{
				flag=1;
				break;
			}
		}
		if(flag==1) break;
	}
	printf("%d",*(a+i));
}
