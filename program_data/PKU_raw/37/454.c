void main()
{
	int t,i,j,k,e,sum=0;
    char *str=(char*)malloc(200*sizeof(char));
    gets(str);
    t=atoi(str);
	char *p[100];
 	for(i=0;i<t;i++)
	p[i]=(char *)malloc(sizeof(char)*100001);
 	for(i=0;i<t;i++)
		gets(p[i]);
	i=0;
loop:for(;i<t;i++)
	{e=strlen(p[i]);
		 for(j=0;j<e;j++)
	{
     for(k=0;k<e;k++)
		 if(*(*(p+i)+j)==*(*(p+i)+k)&&j!=k)
			 sum=1;
		 if(sum==0)
		 {printf("%c\n",*(*(p+i)+j));
		 i++;
		 goto loop;}
	     sum=0;
	}
	 printf("no");
	 printf("\n");
	 }
}