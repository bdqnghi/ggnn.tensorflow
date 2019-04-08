void main()
{
int i,j,m,n,k;
m=0;
char temp;
char b,c,t;
char str1[100];
char str2[200];
char str[100];
gets(str);
n=strlen(str);

if(n%2!=0)
{for (i=0;i<(n-1)/2;i++)
  str1[i]=str[i];

for (i=(n+1)/2;i<n;i++)
  str2[i-(n+1)/2]=str[i];

for (j=0;j<(n-3)/2;j++)
   for (i=0;i<(n-3)/2-j;i++)
	   if(str1[i]>str1[i+1])
	   {
		   temp=str1[i];
		   str1[i]=str1[i+1];
		   str1[i+1]=temp;
	   
	   }

for (j=0;j<(n-3)/2;j++)
   for (i=0;i<(n-3)/2-j;i++)
	   if(str2[i]>str2[i+1])
	   {
		  temp=str2[i];
		   str2[i]=str2[i+1];
		   str2[i+1]=temp;
	   
	   }

for (i=0;i<(n-1)/2;i++)
   if( str1[i]!=str2[i])
   {m=1;
   break;}
if(m==0)
  printf("YES");
else 
printf("NO");
}
else printf("NO");
}