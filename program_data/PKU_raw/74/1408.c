int main()
{
	int a[9]={1,10,100,1000,10000,100000,1000000,1000000,100000000},i,j,k,n,m,p,t=1,l=0,r,s,o;
	scanf("%d%d",&n,&m);
	for(r=0;r<9;r++)
		if(n/a[r]==0) break;
	for(s=0;s<9;s++)
		if(m/a[s]==0) break;
	for(o=r;o<=s;o++)
	{
		k=o;
	if(k%2==0)
	{
		k=k/2;
		for(i=a[k-1];i<a[k];i++)
		{
			p=i*a[k];
			l=i;
			for(j=0;j<k;j++)
			{p=p+(l/a[k-j-1])*a[j];l=l%a[k-j-1];}
			if(p>m) break;
			if(p>=n)
			{
			for(j=2;j<sqrt((double)p)+1;j++)
				if(p%j==0) break;
			if(j==sqrt((double)p)+1) {printf("%d");t=0;goto loop;}
		    }
		}
	}
	else
	{
		k=k/2+1;
		for(i=a[k-1];i<a[k];i++)
		{
			p=i*a[k-1];
			l=i;
			for(j=0;j<k-1;j++)
			{p=p+(l/a[k-j-1])*a[j];l=l%a[k-j-1];}
			if(p>m) break;
			if(p>=n)
			{
			for(j=2;j<(int)sqrt((double)p)+1;j++) 
				if(p%j==0) break;
			if(j==(int)sqrt((double)p)+1) {printf("%d",p);t=0;goto loop;}
			}
		}
	}
	if(p>m) break;
	}
loop:
	i++;
	for(;o<=s;o++)
	{
		k=o;
	if(k%2==0)
	{
		k=k/2;
		for(;i<a[k];i++)
		{
			p=i*a[k];
			l=i;
			for(j=0;j<k;j++)
			{p=p+(l/a[k-j-1])*a[j];l=l%a[k-j-1];}
			if(p>m) break;
			if(p>=n)
			{
			for(j=2;j<sqrt((double)p)+1;j++)
				if(p%j==0) break;
			if(j==sqrt((double)p)+1) {printf(",%d");t=0;}
		    }
		}
	}
	else
	{
		k=k/2+1;
		for(;i<a[k];i++)
		{
			p=i*a[k-1];
			l=i;
			for(j=0;j<k-1;j++)
			{p=p+(l/a[k-j-1])*a[j];l=l%a[k-j-1];}
			if(p>m) break;
			if(p>=n)
			{
			for(j=2;j<(int)sqrt((double)p)+1;j++) 
				if(p%j==0) break;
			if(j==(int)sqrt((double)p)+1) {printf(",%d",p);t=0;}
			}
		}
	}
	if(p>m) break;
	}
	if(t) printf("no\n");
}