void main()
{
	int m,n,i,j,k,t,len,x,y,num=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=2;j<i&&i%j!=0;j++);
		if(j==i)
		{
			len=(int)log10(i)+1;
			for(k=1;k<=len;k++)
			{   x=(i%(int)pow(10,k))/(int)pow(10,k-1);
			    y=(i/(int)pow(10,len-k))%10;
				if(x!=y)break;
			}
			if(k==len+1){printf("%d",i);num=num+1;break;}
		}
	}
	for(t=i+1;t<=n;t++)
	{
		for(j=2;j<t&&t%j!=0;j++);
		if(j==t)
		{
			len=(int)log10(t)+1;
			for(k=1;k<=len;k++)
			{   x=(t%(int)pow(10,k))/(int)pow(10,k-1);
			    y=(t/(int)pow(10,len-k))%10;
				if(x!=y)break;
			}
			if(k==len+1){printf(",%d",t);num=num+1;}
		}
	}
    if(num==0)printf("no");


}

