
int main()
{
	char a[50];
	int b[50],c,l,n;
	int i,j;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		l=strlen(a);
		c=a[0];
		if(c>=65&&c<=90||c==95||c>=97&&c<=122)
		{
			for(j=1;j<l;j++)
			{
				c=a[j];
				if(c>=65&&c<=90||c==95||c>=48&&c<=57||c>=97&&c<=122)
					b[i]=1;
				else
				{b[i]=0;break;}
			}
		}
		else
			b[i]=0;
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==1)
			printf("yes\n");
		else if(b[i]==0)
			printf("no\n");
	}
	return 0;
}

			


