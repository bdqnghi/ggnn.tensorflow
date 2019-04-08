char a[105];
char h[105];
char b[105];
char c[105];
char d[105];
int k;
int p;
int main()
{
	int i,j;
	int t;
	gets(a);
	scanf("%s",b);
	scanf("%s",c);
	for(i=0,j=0;i<=strlen(a);i++)
	{
		d[k++]=a[i];
		h[p++]=a[i];
		if(a[i]==' '||a[i]=='\0')
		{
			d[--k]='\0';
			if(strcmp(d,b)==0)
			{
				p-=strlen(d)+1;
				for(t=0;t<strlen(c);t++)
					h[p++]=c[t];
				if(a[i]==' ')
				h[p++]=' ';
			}
			j=k+1;
			k=0;
		}
	}
	for(i=0;i<strlen(h);i++)
		putchar(h[i]);
	return 0;
}