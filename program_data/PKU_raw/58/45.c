void main()
{
	int n,i,j,s;
	scanf("%d",&n);
	int *q;
	q=(int *)malloc(n*sizeof(int));
	char *str;
	str=(char*)malloc(80*sizeof(char));
	gets(str);
	char **p;
	p=(char**)malloc(n*sizeof(char*));
	for(i=0;i<n;i++)
	{
      *(p+i)=(char*)malloc(80*sizeof(char));
	   gets(*(p+i));
	   if((**(p+i))<'A'||((**(p+i))>'Z'&&(**(p+i))<'a'&&(**(p+i))!='_')||(**(p+i))>'z')
		   *(q+i)=0;
	   else 
	   {
		   if(*(*(p+i)+1)=='\0')
			   *(q+i)=1;
		   for(j=1;j<81,*(*(p+i)+j)!='\0';j++)
		   {
			   s=0;
			   if(*(*(p+i)+j)<'0'||(*(*(p+i)+j)>'9'&&*(*(p+i)+j)<'A')||(*(*(p+i)+j)>'Z'&&*(*(p+i)+j)<'a'&&*(*(p+i)+j)!='_')||*(*(p+i)+j)>'z')
               {
	              *(q+i)=0;
                   break;
			   }
			   else s++;
		   if(s>0)
			   *(q+i)=1;
		   else *(q+i)=0;
		   }
	   }
	  }
	for(i=0;i<(n-1);i++)
		printf("%d\n",*(q+i));
	printf("%d",*(q+i));
}


