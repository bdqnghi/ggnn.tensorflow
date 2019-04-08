void main()
{
int i,j,k,n;
char (*p)[100],*p1,*p2,*a;
char string[100],str[100][100],str1[100],str2[100];
n=0;k=1;
p=str;p1=str1;p2=str2;
a=string;
gets(string);
gets(str1);gets(str2);

for (i=0;*(a+i)!='\0';i++)
  if (*(a+i)==' ')
	  k++;

for (i=0;*(a+n)!='\0';i++)
{  for(j=0;*(a+n)!=' '&&*(a+n)!='\0';j++)
	  { *(*(p+i)+j)=*(a+n);
n++;}         
  *(*(p+i)+j)='\0';
  n=n+1;
}
n=n-1;

for(i=0;i<n;i++)
  if(strcmp(*(p+i),p1)==0)
  strcpy(*(p+i),p2);

for (i=0;i<k-1;i++)
{printf("%s",*(p+i));
printf(" ");}
printf("%s",*(p+k-1));


}
