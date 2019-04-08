void main()
{
 int n,i,j,k,m;
 char **p;
 scanf("%d\n",&n);
 p=(char **)malloc(n*sizeof(char *));
 for(i=0;i<n;i++)
    *(p+i)=(char *)malloc(80*sizeof(char));
 for(i=0;i<n;i++)
 {
  gets(*(p+i));
 }
 for(i=0;i<n;i++)
 {
      if((*(*(p+i))>='a'&&*(*(p+i))<='z')||(*(*(p+i))>='A'&&*(*(p+i))<='Z')||(*(*(p+i))=='_'))
	  {
		 m=strlen(*(p+i));
	     for(j=0;j<m;j++)
		 {
		 if((*(*(p+i)+j)>='a'&&*(*(p+i)+j)<='z')||(*(*(p+i)+j)>='A'&&*(*(p+i)+j)<='Z')||(*(*(p+i)+j)=='_')||(*(*(p+i)+j)>='0'&&*(*(p+i)+j)<='9'))
			 k=1;
		 else
		 {
		 k=0;
		 break;
		 }
		 }
	  }
	  else
	  {
	  k=0;
	  }
	  printf("%d\n",k);
 }
 
}