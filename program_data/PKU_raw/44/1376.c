
int main()
{
	char a[10],b[10],c[10],d[10],e[10],f[10];
	void reverse(char x[10]);
	void putstr(char y[10]);
	reverse(gets(a));
	reverse(gets(b));
	reverse(gets(c));
	reverse(gets(d));
	reverse(gets(e));
	reverse(gets(f));
	putstr(a);
	putstr(b);
	putstr(c);
	putstr(d);
	putstr(e);
	putstr(f);
}

void reverse(char x[10])
{
	int length,i,j,t;
	char p[10]={0};
	length=strlen(x);
	if (x[0]==45)
	{
		if(x[1]==48)
		{
			x[0]=48;
			x[1]='\0';
		}
		else {
		for(i=length-1,j=1;i>=1;i--,j++)
				p[j]=x[i];
		for(i=1;i<j;i++)
			if (p[i]!=48) break;
		for (t=1;i<j;i++,t++)
			x[t]=p[i];
		x[t]='\0';
		}
	}
	if (x[0]!=45)
	{
		if(x[0]==48)
		{
			x[0]=48;
			x[1]='\0';
		}
		else{
		for(i=length-1,j=0;i>=0;i--,j++)
				p[j]=x[i];
		for(i=0;i<j;i++)
			if (p[i]!=48) break;
        for (t=0;i<j;i++,t++)
			x[t]=p[i];
		x[t]='\0';
		}
	}
}

void putstr(char y[10])
{
	puts(y);
}


