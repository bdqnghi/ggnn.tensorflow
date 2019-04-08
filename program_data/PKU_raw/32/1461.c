

int main(int argc, char* argv[])
{
	char a[200],b[200],c[200];
	int n,i,j,al,bl;
	scanf("%d\n",&n);
	for (i=0;i<n;i++)
	{
		if(i>0) scanf("\n");
		gets(a);
		gets(b);
		al=strlen(a);
		bl=strlen(b);
		for (j=0;j<=bl-1;j++) b[al-1-j]=b[bl-1-j];
		for (j=0;j<al-bl;j++) b[j]=48;
		b[al]=0;
		for (j=al-1;j>=0;j--)
		{
			if(a[j]>=b[j])	c[j]=a[j]-b[j]+48;
			else 
			{
				c[j]=a[j]-b[j]+58;
				if(a[j-1]==0) a[j-1]=57;
				else a[j-1]=a[j-1]-1;
			}
		}
		c[al]=0;	
		puts(c);	
	}

	return 0;
}
