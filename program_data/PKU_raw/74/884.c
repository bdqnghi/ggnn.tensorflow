void main()
{
	int m,n,i,j,flag1=0,flag2=0,flag3=0,a,k,sign=0;
    double c;
	int b[20]={0};
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=2;j<=(i/2)+1;j++)
		{
			if(i%j==0)
			{	
				flag1=0;
				break;
			}
			else flag1=1;
		}
		if(flag1==0)continue;
		else
		{
			for(a=1;;a++)
			{
				c=pow(10,(double)a);
				if(i/c<1)
					break;
			}
			a--;
			c=c/10;
            k=i;
			for(j=0;j<=a;j++)
			{
				b[j]=(int)(k/c);
				k=k-(int)(b[j]*c);
				c=c/10;
			}
            for(j=0;j<=a/2;j++)
			{
				if(b[j]==b[a-j])
				{
					flag2=1;
				}
				else 
				{
					flag2=0;break;
				}
			}
			if(flag2==1)
			{
                flag3=1;
				if(sign==0)
				{
					printf("%d",i);
					sign=1;
				}
				else printf(",%d",i);
			}		
		}
	}
	if(flag3==0)
		printf("no");
}