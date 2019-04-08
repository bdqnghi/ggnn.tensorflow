int pd(char c[],int i);
int main()
{
	char a[501]={'0'},c[501]={'0'},d[501]={'0'};
	int n,i,j,k;
	gets(a);
	n=strlen(a);
	for(i=2;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			for(k=0;k<=500;k++)
				d[k]=c[k]='\0';
			for(k=0;k<i;k++)
				c[k]=a[k+j];
			for(k=0;k<i;k++)
				d[k]=c[i-k-1];
			
			if(strcmp(c,d)==0)
			{
				puts(c);
			    
			}
		}

	}
}
