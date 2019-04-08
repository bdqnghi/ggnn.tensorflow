int main()
{   
	int n,i,k,t,u,m,q=0,c;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
	{
		for(k=3;k<=i;k++)
		{
			t=0;u=0;c=0;
			for(m=2;m<=(int)sqrt(k);m++)
			{
				if(k%m==0) t=1;
			}

			if (t==0) 
			{
                q=i-k;
				for(m=2;m<=(int)sqrt(q);m++)
				{
					if(q%m==0) u=1;
				}
			    if (u==0) {printf("%d=%d+%d\n",i,k,q);c=1;break;}
			}
		if(c==1) break;	
		}
	}
	return 0;
}
