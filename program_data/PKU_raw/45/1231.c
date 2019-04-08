int main()
{
	char s[50]={0},w[50]={0};
 scanf("%s%s",s,w);
 int n,l,j,k=0,b=0,a=2,c;
 n=strlen(s);
 l=strlen(w);
 c=l-n;
 for(j=0;j<c+1&&a==2;j++)
 {
  if(s[0]==w[j])
  {
	  a=1;
   b=j;
   for(k=j;k<j+n;k++)
   {
    if(s[k-j]!=w[k])
    {
     a=2;
     break;
    }
   }
  }
 }
 printf("%d",b);
 return 0;
}
