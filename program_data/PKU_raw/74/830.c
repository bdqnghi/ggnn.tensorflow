void main()
{
	int m,n,a,b,c,d,k,e,i,t,h,s=0;
	scanf("%d%d",&m,&n);
	for(;m<=n;m++)
	{
		for(k=1,i=1;m-k>=0;i++)
		{
			k=10*k;
		}
		c=m,d=m,e=1;
		do
		{
			a=c%10;
			c=(c-a)/10;
			k=k/10;
			b=d/k;
			d=d-b*k;
			e++;
			if(e==i){
				h=m;
				for(t=2;t<h&&s==0;t++)
					{
					if(h%t==0)
						break;
					else if(t==h-1){
						printf("%d",h);
						s=s+1;
					}
					else
						continue;
				}
				if(s==1)
				{
					s=s+1;
					continue;
				}
				for(t=2;t<h&&s>1;t++)
					{
					if(h%t==0)
						break;
					else if(t==h-1)
						printf(",%d",h);
					else
						continue;
				}
			}
		}while(a==b&&e<i);

	}
	if(s==0)
		printf("no");

}
	
