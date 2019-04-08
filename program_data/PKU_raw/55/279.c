int main(int argc, char* argv[])
{
	long b,i,c,d,e=0,f;
	char a[50],s[50];
	long z[50];
	scanf("%d%s%d",&b,a,&c);
	d=strlen(a);
	for(i=0;i<d;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
			z[i]=a[i]-48;
		else if(a[i]>='A'&&a[i]<='Z')
			z[i]=a[i]-55;
		else if(a[i]>='a'&&a[i]<='z')
			z[i]=a[i]-87;

	}
	
	for(i=0;i<d;i++)
	{
		for(f=0;f<d-i-1;f++)
			z[i]=z[i]*b;
	}
	for(i=0;i<d;i++)
	{
		e=e+z[i];
	}
     
	for(i=0;;i++)
	{
		s[i]=e%c+48;
		e=e/c;
		if(e==0)
			break;
	}
long w;
w=i+1;
char t[50];
	
	for(i=0;i<w;i++)
	{
		if(s[i]>'9')
			s[i]=s[i]+7;
	}
	for(i=0;i<w;i++)
	{
		t[w-1-i]=s[i];
	}
    int y;
	y=strlen(t);

	for(i=0;i<w;i++)
	{
		if(t[i]!='\0')
	printf("%c",t[i]);
		else break;
	}
	
	return 0;
}

