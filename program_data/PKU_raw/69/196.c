void main()
{
	char a[260],b[260],c[260];
	int la,lb,t,i,x=0,l,j,flag=0;
	gets(a);
	gets(b);
	la=strlen(a);
	lb=strlen(b);
	l=(la>=lb)?la:lb;
	for(i=0;i<=l;i++)
	{
		if(lb-1-i<0)
			b[lb-1-i]='0';
		if(la-1-i<0)
			a[la-1-i]='0';
        t=a[la-1-i]+b[lb-1-i]+x-96;
		if(t<=9)
		{
			c[i]=t;
			x=0;
		}
		else
		{
		    t=t-10;
			c[i]=t;
			x=1;
		}
	}
	for(j=l;j>0;j--)
    {
    if(c[j]==0 && flag==0)
       continue;
    else
      {flag=1;
		  printf("%d",c[j]);}}
	printf("%d",c[0]);
}
