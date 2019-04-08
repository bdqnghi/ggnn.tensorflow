
int main()
{
 char a[100000];
 int b[26] ;
 int i,j,t,lenth;
 int n = 1;
 scanf("%d",&t);
 for(j=0;j<t;j++)
 {
n=1; 
 scanf("%s",a);
 lenth = strlen(a);
 for(i=0;i<26;i++)
	 b[i]=0;
 for(i=0;i<lenth;i++)
 {
    
         b[a[i] - 'a'] = b[a[i] - 'a'] + 1;
 }
 for(i=0;i<lenth;i++)
 {
  if(b[a[i] - 'a'] == 1)
  {
   printf("%c\n",a[i]);
   n = 0;
   break;
  }
 }
 if(n == 1)
  printf("no\n");

 for(i = 0;i < 26;i++)
  b[i] = 0;
 }

 return 0;
}