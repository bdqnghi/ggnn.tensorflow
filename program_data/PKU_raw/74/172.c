int main()
{
	long n[100000],s[100000],i,k,a,b,h=0,x,m[10000],c=0;
	scanf("%ld %ld",&a,&b);
	for(i=a;i<=b;i++)
	{
		x=1;
		for(k=2;k<i;k++)
			if(i%k==0)
			{
				x=0;
				break;
			}
		if(x)
		{
			s[h]=i;
			h++;
		}
	}
	for(i=0;i<h;i++)
	{
		if(s[i]/10==0)n[i]=1;
		else if(s[i]/100==0)n[i]=2;
		else if(s[i]/1000==0)n[i]=3;
		else if(s[i]/10000==0)n[i]=4;
		else if(s[i]/100000==0)n[i]=5;
		else n[i]=0;
	    if(n[i]==2&&(s[i]/10==s[i]%10))
		{
			m[c]=s[i];
			c++;
		}
		else if(n[i]==3&&(s[i]/100==s[i]%10))
		{
			m[c]=s[i];
			c++;
		}
		else if(n[i]==4&&(s[i]/1000==s[i]%10)&&(s[i]%1000/100==s[i]%100/10))
		{
			m[c]=s[i];
			c++;
		}
		else if(n[i]==5&&(s[i]/10000==s[i]%10)&&(s[i]%10000/1000==s[i]%100/10))
		{
			m[c]=s[i];
			c++;
		}
	}
	if(c>0)
	for(i=0;i<c;i++)
	{
		printf("%ld",m[i]);
		if(i<c-1)printf(",");
	}
	else printf("no");
	return 0;
}