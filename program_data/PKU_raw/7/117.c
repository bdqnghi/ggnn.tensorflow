int main()
{
	char a[256], b[256], c[256];
	scanf("%s%s%s",a, b, c);
	int i, l, k;
	int m=0, n=0;
	for(;;)
	{
		for(k=m;;k++)
		{
			if(a[k]==b[0])
			{
				n=1;
				break;
			}
			if(a[k]=='\0')
			{
				n=2;
				break;
			}
		}
		if(n==2) break;
		else
		{
			m=k+1;
			for(l=1;;l++)
			{
				if(b[l]=='\0')
				{
					n=3;
					break;
				}
				if(a[k+l]!=b[l])
				{
					n=4;
					break;
				}
			}
			if(n==3) break;
		}
	}

	if(n==2) printf("%s",a);
	else
	{
		for(i=0;;i++)
		{
			a[k+i]=a[k+i+strlen(b)];
			if(a[k+i+strlen(b)]=='\0') break;
		}
		for(i=strlen(c);i>0;i--)
		{
			int x=strlen(a);
			for(l=0;x-l>=k;l++)
			{
				a[x+1-l]=a[x-l];
			}
			a[k]=c[i-1];
		}

		printf("%s",a);
	}
	return 0;
} 
