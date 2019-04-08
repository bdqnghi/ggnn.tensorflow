void main()
{
	long i,j,k,n,t,*a;
	char *p[100];
	scanf("%d",&t);
	a=(long*)malloc(26*sizeof(long));
	for(i=0;i<t;i++)
	{
		p[i]=(char*)malloc(100000*sizeof(char));
		scanf("%s",p[i]);
	}
	for(i=0;i<t;i++)
	{
		for(k=0;k<26;k++)
        *(a+k)=0;
		j=0;
		n=0;
		while(*(p[i]+j)!='\0')
		{
			*(a+(*(p[i]+j)-97))=*(a+(*(p[i]+j)-97))+1;
			j++;
		}
		
     	for(j=0;*(p[i]+j)!='\0';j++)
     	{
			if(*(a+(*(p[i]+j)-97))==1)
			{printf("%c\n",*(p[i]+j));n=1;break;}
		}
	    if(n==0)printf("no\n");
	}
}