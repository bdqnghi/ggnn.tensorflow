int main()
{
	double p;
	int e=0,t=0,f=0,q=0;
	char a[501],b[501];
	scanf("%lf\n",&p);
	gets(a);
	gets(b);
	if(strlen(a)!=strlen(b))q=1;
	else
	{
		for(int i=0;1;i++)
		{
			if(a[i]=='\0')break;
			if(a[i]!='A' && a[i]!='G' && a[i]!='C' && a[i]!='T')
			{
				q=1;
				break;
			}
			if(b[i]!='A' && b[i]!='G' && b[i]!='C' && b[i]!='T')
			{
				q=1;
				break;
			}
			if(a[i]==b[i])e++;
			t++;
		}
	}
	if(q==1)printf("error");
	else
	{
		if(p<1.0*e/t)printf("yes");
		if(p>1.0*e/t)printf("no");
	}
	return 0;
}
