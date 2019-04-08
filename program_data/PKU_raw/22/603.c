void main()
{
	int num[300]={0};
	char c[1000]={0};
	int re,max,n=0,a=0,p=0,i;
	gets(c);
	i=0;
	while(i==0||c[i-1]!=0)
	{
		if(c[i]!=','&&c[i]!=0)
		{
			a=a*10+c[i]-'1'+1;
		}
		else
		{
			num[n]=a;
			n++;
			a=0;
		}
		i++;
	}
	max=num[0];
	for(i=0;i<n;i++)
		if(num[i]>max) max=num[i];
	re=0;
	for(i=0;i<n;i++)
	{
		if(num[i]!=max)
		{
			p=1;
			if(num[i]>re) re=num[i];
		}
	}
	if(p==1) printf("%d",re);
	else printf("No");
}