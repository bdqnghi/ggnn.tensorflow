int main()
{
	int l,i,t=0,s,d=1;
	double b,x=0.0;
	char a[501],c[501];
	scanf("%lf",&b);
	scanf("%s",a);
	scanf("%s",c);
	l=strlen(a);
	s=strlen(c);
	if(l==s)
	{
		for(i=0;i<l;i++)
		{
			if((a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T')||(c[i]!='A'&&c[i]!='G'&&c[i]!='C'&&c[i]!='T'))
			{
				d=0;
				break;
			}
			else if(a[i]==c[i])
				t++;
			else
				t=t;
		}
		if(d!=0)
		{
		x=1.0*t/l;
		if(x>=b)
			printf("yes\n");
		else
			printf("no\n");
		}
		else
			printf("error\n");
	}
	else
		printf("error\n");
	return 0;
}