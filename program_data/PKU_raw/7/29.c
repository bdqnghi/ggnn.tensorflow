main()
{
	int i,j,k,p;
	char a[300],b[300],c[300];
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
	p=strlen(b);
	for(i=0;a[i]!='\0';i++)
		if(a[i]==b[0])
		{
			for(j=i,k=0;k<p;j++,k++)
			{
				if(a[j]!=b[k]) break;
			}
				if(k==p)
				{
					for(j=i,k=0;k<p;j++,k++)
						a[j]=c[k];
						printf("%s",a);break;
				}	
		}
		if(a[i]=='\0')
			printf("%s",a);
}