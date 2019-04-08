int main()
{
	char a[100];
	char b[100];
	char c[100];
	char d[100];
	char e[1];
	int i,j,k;
    while(scanf("%s %s",a,b)!=EOF)
	{
		e[0]=a[0];
		k=0;
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]>e[0])
			{
				e[0]=a[i];
				k=i;
			}
		}
		for(i=0;i<=k;i++)
		{
			c[i]=a[i];
		}
		c[i]='\0';
		for(j=k+1;a[j]!='\0';j++)
		{
			d[j-k-1]=a[j];
		}
		d[j-k-1]='\0';
        strcat(c,b);
		strcat(c,d);
		printf("%s\n",c);
	}
	return 0;
}



			
