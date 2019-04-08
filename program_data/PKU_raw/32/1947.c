
int trans(char str[], int a[])
{
	int l=(int)strlen(str);
	int i;
	for (i=0;i<l;i++)
	{   a[l-i-1]=str[i]-'0';
	}
	return l;
}

void print(int a[], int l)
{
	int k=l-1;
	int i;
	while (a[k]==0 && k>0)
	{ k--;
	}
	for (i=k;i>=0;i--)
	{ printf("%d",a[i]);
	}
}

int minus(int a[], int al, int b[], int bl,int c[])
{
	int i;
	for (i=0;i<al;i++)
	{   c[i]=a[i];
	    if (i<bl)  c[i]=c[i]-b[i];
	}
	for (i=0;i<al;i++)
	{   if (c[i]<0)
	{   c[i+1]--;
	    c[i]=c[i]+10;
	}
	}
	return al;
}

int main()
{
	char s1[101],s2[101];
	int a[101],b[101],c[101];
	int al,bl,cl,i,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{   scanf ("%s%s",s1,s2);
	    al=trans(s1,a);
		bl=trans(s2,b);
		cl=minus(a,al,b,bl,c);
		print(c,cl);
		printf("\n");
	}

	return 0;
}

