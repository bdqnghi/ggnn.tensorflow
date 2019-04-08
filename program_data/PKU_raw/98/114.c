void main()
{
 char word[50];
 int a=0,b=0,c,d,i,n,j,k;
 scanf("%d",&n);
 scanf("%s",word);
  a=strlen(word)+1;
  b=b+a;
  printf("%s",word);
 for(i=1;i<n;i++)
 {
  scanf("%s",word);
  a=strlen(word)+1;
  b=b+a;
  if(b<=81) printf(" %s",word);
   if(b>81) 
  {
   printf("\n%s",word);
   b=a;
  }
 }
}