int find(char *str,int n)
{
	int max=*str,i,sign;
	for(i=0;i<n;i++)
		if(*(str+i)>max)max=*(str+i),sign=i;
		return sign;
}
void insert(char *a,char *b,int k,int n)
{
	int i,j;
	for(i=n;i>k;i--)
		*(a+i+3)=*(a+i);
	for(j=0;j<3;j++)
		a[++k]=b[j];
}
void main()
{
      char str[100],substr[10];
	  int n,sign;
	  while(scanf("%s%s",str,substr)!=EOF)
	  {
		  n=strlen(str);
	  sign=find(str,n);
	  insert(str,substr,sign,n);
	  printf("%s\n",str);
	  }
}



