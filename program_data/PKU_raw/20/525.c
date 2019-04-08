 main()
{
	char str[14],substr[14],*p=str,*p1,*p2=substr,max;
	int i,j,m,n,k;
	while(scanf("%s %s",str,substr)!=EOF)
	{
		n=strlen(str);
		max=str[0];
		p1=str;
		k=0;
	    for(i=0;i<n;i++)
			if(str[i]>max)
			{
				max=str[i];
				k=i;
			}						
			for(p1=str+n-1;p1>str+k;p1--)				
				*(p1+3)=*p1;
			p1=str;
			*(p1+k+1)=*p2;
			*(p1+k+2)=*(p2+1);
			*(p1+k+3)=*(p2+2);
			for(p=str;p<str+n+3;p++)
		printf("%c",*p);
         printf("\n");
	}
	return 0;
}