void main()
{
	char str[1000];
	int i,j=1,n,a[20],k;
	gets(str);
	n=strlen(str);
	for(i=n-1;i>=0;i--)
		if(str[i]==' ')
		{a[j]=i;
		j++;
		}
		a[0]=n;
		a[j]=-1;k=j;
		for(i=0;i<k;i++)
		{for(j=a[i+1]+1;j<a[i];j++)
				printf("%c",str[j]);
			if(i!=k-1)
				printf(" ");
		}
}
