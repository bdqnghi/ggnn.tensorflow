void paixu(int str[],int n1);
void hebing(int str1[],int str2[],int n1,int n2);
void shuchu(int str[],int n);
void main()
{
	int n1,n2;
	int a[100],b[100];
	scanf("%d%d",&n1,&n2);
	paixu(a,n1);
	paixu(b,n2);
	hebing(a,b,n1,n2);
	shuchu(a,n1+n2);
}
void paixu(int str[],int n)
{
	int i,p,m;
	for(i=0;i<n;i++)
		scanf("%d",&str[i]);
	for(p=1;p<n;p++)
		for(i=0;i<=n-1-p;i++)
		  if(str[i]>str[i+1])
		  {
			  m=str[i];
			  str[i]=str[i+1];
			  str[i+1]=m;
		  }
}
void hebing(int str1[],int str2[],int n1,int n2)
{
    int i;
	for(i=n1;i<n1+n2;i++)
		str1[i]=str2[i-n1];
}
void shuchu(int str[],int n)
{
	int i;
	printf("%d",str[0]);
	for(i=1;i<n;i++)
		printf(" %d",str[i]);
}



