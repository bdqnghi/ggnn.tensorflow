
int add(char x,char y);
int over(char x,char y);
int main()
{
	char a[260],b[260];
	char c[260];
	int i,j;
	int len,lena,lenb,lenc;
	int o=0;
	int count=0;
	int highesta,highestb;
	scanf("%s",a);
	scanf("%s",b);
	lena=(int)strlen(a);
	lenb=(int)strlen(b);
	len=(lena>lenb)? lena:lenb;
	if (len==lena)
	{
		for (i=lenb;i>=0;i--)
		{
			b[i+lena-lenb]=b[i];
		}
		for (i=0;i<lena-lenb;i++)
		{
			b[i]='0';
		}
	}
	else
	{
		for (i=lena;i>=0;i--)
		{
			a[i+lenb-lena]=a[i];
		}
		for (i=0;i<lenb-lena;i++)
		{
			a[i]='0';
		}
	}
	for (i=len-1;i>=0;i--)
	{
		if (i==len-1)
		{
			c[i]=(char)(add(a[i],b[i])+48);
			o=over(a[i],b[i]);
		}
		if (i>0 && i<len-1)
		{
			if ((add(a[i],b[i])+o)==10)
			{
				c[i]='0';
				o=1;
			}
			else
			{
				c[i]=(char)(add(a[i],b[i])+48+o);
				o=over(a[i],b[i]);
			}
		}
		if (i==0)
		{
			highesta=((int)a[0])-48;
			highestb=((int)b[0])-48;
			if (highesta+highestb+o>=10)
			{
				for (j=len-1;j>=1;j--)
				{
					c[j+1]=c[j];
				}
				c[0]='1';
				c[1]=(char)((highesta+highestb+o-10)+48);
				c[len+1]='\0';
			}
			else
			{
				c[0]=(char)((highesta+highestb+o)+48);
				c[len]='\0';
			}
		}
	}
	lenc=strlen(c);
	for (i=0;i<lenc-1;i++)
	{
		if (c[i]=='0')
		{
			count++;
		}
		else
		{
			break;
		}
	}
	for (i=count;i<lenc-1;i++)
	{
		printf("%c",c[i]);
	}
	printf("%c\n",c[lenc-1]);
	return 0;
}
int add(char x,char y)
{
	int m,n;
	int result;
	m=((int)x)-48;
	n=((int)y)-48;
	result=(m+n>=10)? (m+n-10):(m+n);
	return result;
}
int over(char u,char v)
{
	int p,q;
	int overflow;
	p=((int)u)-48;
	q=((int)v)-48;
	overflow=(p+q>=10)? 1:0;
	return overflow;
}