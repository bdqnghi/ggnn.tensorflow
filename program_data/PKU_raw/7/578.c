int main()
{
	char a[300],b[300],c[300],d[300],e[300];
	int i,j,k,l;
	i=0;
	j=0;
	gets(a);
	gets(b);
	gets(e);
    while(a[i]!='\0')
	{
		c[j]=a[i];
		if(c[j]==b[0]&&(i+strlen(b)<=strlen(a)))
		{
			l=0;
			for(k=i;k<=i+strlen(b)-1;k++)
			{
				d[l]=a[k];
				l++;
			}
			d[l]='\0';
			if(strcmp(d,b)==0)
			{
				c[j]='\0';
				printf("%s",c);
				printf("%s",e);
				j=i+strlen(b);
				k=0;
				while(a[j]!='\0')
				{
					c[k]=a[j];
					j++;
					k++;
				}
				c[k]='\0';
				printf("%s",c);
				return 0;
			}
		}
		i++;
		j++;
	}
	printf("%s",a);
	return 0;
}