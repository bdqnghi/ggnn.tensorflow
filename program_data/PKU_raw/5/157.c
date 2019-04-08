int main()
{
	int a,b,c,d,len,lena;
	double r,ra;
	char z[200];
	char x[200];
	scanf("%lf",&r);
	scanf("%s",z);
	scanf("%s",x);
	len=strlen(z);
	lena=strlen(x);
	d=0;
	for(a=0;a<=len-1;a++)
	{
        if(len!=lena) d=1;
		if ((z[a]!='A')&&(z[a]!='T')&&(z[a]!='C')&&(z[a]!='G')) d=1;
        if ((x[a]!='A')&&(x[a]!='T')&&(x[a]!='C')&&(x[a]!='G')) d=1;
	}
	if(d==1) 
	{
		printf("error");
		return 0;
	}
	b=0;c=0;
    for(a=0;a<=len-1;a++)
	{
		c++;
		if(z[a]==x[a]) b++;
	}
	ra=b*1.0/c;
	if (ra>r) printf("yes");
		else printf("no");
	return 0;
}