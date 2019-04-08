int main()
{
	int m,n,i,j,p,k,h,sh,ch,l,o,x=0,a[10000];
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		j=0;l=i;
		p=log10(i);
		for(k=p;k>=1;k--)
		{
			sh=1;
			ch=1;
			for(h=1;h<p-k+1;h++)
				ch=ch*10;
			for(h=0;h<k;h++)
               sh=sh*10;
			j=l/sh*ch+j;
			l=l-sh*(l/sh);
		} 
        ch=ch*10;
		j=l*ch+j;
		j=j+1-1;
		if(i==j)
		{
			for(o=2;o<=sqrt(j);o++)
			{
				if(j%o==0)
					break;
			}
			if(o==(int)sqrt(j)+1)
			{
			a[x]=j;
			x=x+1;
			}
		}
	}


	if(x==0)
		printf("no");
	else
	{
		
		for(i=0;i<x;i++)
		{if(i!=x-1)
		printf("%d,",a[i]);
		else printf("%d",a[i]);
		}
	}
	







	return 0;
}