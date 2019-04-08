int main()
{
	char q;
	char ch[300];
	int r,n,i,j,t,w,e,m=0;
	int k[300]={0};
	gets(ch);
	r=strlen(ch);
	for(n=65;n<=90;n++)
	{
		q=n;
		for(i=0;i<=r-1;i++)
		{
			if(ch[i]==n)
				{k[n]++;
			m++;}
		}
		
		if(k[n]>0)
		{
			printf("%c=%d\n",q,k[n]);
		}
	}
	for(t=97;t<=122;t++)
	{
		q=t;
		for(w=0;w<=r-1;w++)
		{
			if(ch[w]==t)
				{k[t]++;
			m++;}
		}
		
		if(k[t]>0)
		{
			printf("%c=%d\n",q,k[t]);
		}
	}
	if(m==0) {printf("No");}
    return 0;
}