void main()
{
	char str[11],substr[4],*p1=str,*p2=substr;
	int i,j,k;
    while(scanf("%s%s",str,substr)!=EOF)
	{for(i=0,k=0;str[i]!='\0';i++)
		{if(str[i]>str[k])
			k=i;}
	
	for(j=0;j<=k;j++)
	  printf("%c",*(p1+j));
    printf("%s",substr);
    for(j=0;str[k+1+j]!='\0';j++)
	  printf("%c",*(p1+k+1+j));
	printf("\n");
	}
}