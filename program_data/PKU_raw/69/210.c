int main ()
{
	int i,d,e,f,g,h=0,k=-1;
	char a[255],b[255],c[255],z;
	for (i=0;i<255;i++)
	{
		a[i]='a';
		b[i]='a';
		c[i]='a';
	}
	scanf("%s\n%s",a,b);
	d=strlen(a);
	for(i=0;i<d/2;i++)
	{
		z=a[i];
		a[i]=a[d-1-i];
		a[d-1-i]=z;
	}
	e=strlen(b);
	for(i=0;i<e/2;i++)
	{
		z=b[i];
		b[i]=b[e-1-i];
		b[e-1-i]=z;
	}
	if (d<e)
		f=e;
	else
		f=d;
	for (i=0;i<f;i++)
	{
		if(a[i]=='a'||a[i]=='\0')
			a[i]=48;
		if(b[i]=='a'||b[i]=='\0')
			b[i]=48;
		g=a[i]-48+b[i]-48+h;
		if (g>=10)
		{
			c[i]=g-10+48;
			h=1;
		}
		else
		{
			c[i]=g+48;
			h=0;
		}
	}
	if (h==1)
	{
		c[f]='1';
		f=f+1;
	}
	for(i=250;i>=0;i--)
	{
		if(c[i]!='0'&&c[i]!='a')
		{
			k=i;
			break;
		}
	}
	if(k==-1)
		printf("0");
	else
	{
		for(i=k;i>=0;i--)
			printf("%c",c[i]);
	}
	return 0;
}