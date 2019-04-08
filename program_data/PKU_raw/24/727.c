void main()
{
	char str[1000];
	char *p;
	int len,i,a[100]={0},m=0,t=0,n=0,max,min,pmax,pmin,summax=0,summin=0;
	gets(str);
	p=str;
	len=strlen(str);
	for (i=0;i<len+1;i++)
	{
		if (((*(p+i)>='a')&&(*(p+i)<='z')) || ((*(p+i)>='A') && (*(p+i)<='Z')))
		{
			m=m+1;
		}
		else
		{
			a[t]=m;
			t++;
			m=0;	
		}
	}
	t=0;
	while (a[t]!=0)
	{
		t++;
	}
	max=a[0];
	min=a[0];
	for (i=0;i<t;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
	}
	for (i=0;i<t;i++)
	{
		if (a[i]<min)
		{
			min=a[i];
		}
	}
	for (i=0;i<t;i++)
	{
		if (a[i]==max)
		{
			pmax=i;
			break;
		}
	}
	for (i=0;i<t;i++)
	{
		if (a[i]==min)
		{
			pmin=i;
			break;
		}
	}
	for (i=0;i<pmax;i++)
	{
		summax=summax+a[i]+1;

	}
	for (i=0;i<pmin;i++)
	{
		summin=summin+a[i]+1;
	}
	for (i=0;i<a[pmax];i++)
	{
		printf("%c",str[summax+i]);
	}
    printf("\n");
	for (i=0;i<a[pmin];i++)
	{
		printf("%c",str[summin+i]);
	}
	return;
}