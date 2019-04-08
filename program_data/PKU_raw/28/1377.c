int main()
{
	char a[2000],b[2000];
	gets(a);
    int i,j,k,c[300],l;
	i=0;
	j=0;
	k=0;
	while(a[i]!='\0')
	{
		while(a[i]!=' ')
		{
		    while(a[i]!=' '&&a[i]!='\0')
			{
			     b[j]=a[i];
			     j++;
			     i++;
			}
		    b[j]='\0';
		    c[k]=strlen(b);
			k++;
			if(a[i]=='\0')
			{
				for(l=0;l<=k-2;l++)
				{
					printf("%d,",c[l]);
				}
				printf("%d\n",c[k-1]);
				return 0;
			}
			i++;
			while(a[i]==' ')
			{
				i++;
			}
		    j=0;
		}
	
		i++;
	}
	
	return 0;

}