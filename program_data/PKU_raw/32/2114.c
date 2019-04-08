int main()
{
	int n,s[200],i,j,e,l,k,d[200],h;
	char a[200];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(h=0;h<200;h++)
		{
			a[h]=s[h]=d[h]=0;
		}
		scanf("%s",a);
		l=strlen(a);
		for(j=0;j<l;j++)
		{
			s[j]=a[l-j-1]-'0';
		}
		scanf("%s",a);
		k=strlen(a);
		for(j=0;j<k;j++)
		{
			d[j]=a[k-j-1]-'0';
		}
		for(j=0;j<l;j++)
		{
			s[j]=s[j]-d[j];
			if(s[j]<0)
			{
				s[j]=s[j]+10;
				s[j+1]=s[j+1]-1;
			}
		}
		for(j=l-1;j>=0;j--)
		{
			if(s[j]!=0) break;
		}
		for(h=j;h>=0;h--)
		{
			printf("%d",s[h]);
		}
		printf("\n");
	}
	return 0;
}

		
