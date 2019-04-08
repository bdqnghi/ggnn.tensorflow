void main()
{
	char a[200];
	int b[200];
	int i,j,k,l;
	gets(a);
	for(k=0;k<200;k++)
	{
		if(a[k]=='\0')
			break;
	}
	i=0;

	for(j=0;i<k;j++)
	{
		for(;i<k;i++)
		{
			if(a[i]==' ')
			{
				b[j]=i;
				i++;
				break;
			}
		}

	}
	b[j-1]=k;
	b[-1]=-1;
	l=j-2;
	for(;l>=-1;l--)
	{	
             for(k=b[l]+1;k<=b[l+1]-1;k++)
		{
	
		          	printf("%c",a[k]);
			

		}

         if(l!=-1)
         printf(" ");
}


}

