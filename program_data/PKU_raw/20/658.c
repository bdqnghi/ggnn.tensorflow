void main()
{
	char *a,*b,*t;int i,j,n,max=0;
	a=(char *)calloc(1,12);
	b=(char *)calloc(1,5);
	t=(char *)calloc(1,20);
	for(;scanf("%s %s",a,b)!=EOF;)
	{
		for(i=0;i<(n=strlen(a));i++)
		{if(*(a+i)>max) max=*(a+i);}
		for(i=0;i<(n=strlen(a));i++)
			if(*(a+i)==max) break;
		strncat(t,a,i+1);strcat(t,b);strcat(t,a+i+1);
		printf("%s\n",t);
		a=(char *)calloc(1,12);
	    b=(char *)calloc(1,5);
	    t=(char *)calloc(1,20);
		max=0;
	}
}