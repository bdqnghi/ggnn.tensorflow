int main()
{ char c;
char str[10000]={0};
  int m=0,i,j=0,k=0;
  int sum=0,s;
  int b[100000];
while((c=getchar())!='\n')
{
	str[m]=c;
	m++;
}
for(i=0;i<m;i++)
{
	if((str[i]==' ')&&(str[i-1]==' '))
	{
	b[j]=i;
	j++;
}
}
for(i=0;i<m;i++)
{ sum=0;
	for(k=0;k<j;k++)
	{
		
	   if(i!=b[k])
		   s=0;
	   else 
		   s=1;
	sum=sum+s;
	
	
	}
	if(sum==0)
cout<<str[i];



}
 



	return 0;














}