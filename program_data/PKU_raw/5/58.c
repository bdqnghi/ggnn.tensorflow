
int main()
{
	int la,lb,i,d;
	double t,tt;
	char a[505],b[505];
	scanf("%lf",&t);
	scanf("%s",a);
	scanf("%s",b);
	la=strlen(a);
	lb=strlen(b);
	d=-1;
	if(la==lb)
	{
		d=0;
		for(i=0;i<la;i++)
		{
			if(a[i]==b[i])
			{
				d++;
			}
			if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'))
			{
				d=-1;
				break;
			}
		}
	}
	if(d<0)
		printf("error");
	else
	{
		tt=d*1.000/la;
		if(tt>t)
			printf("yes");
		else
			printf("no");
	}
	
	return 0;
}