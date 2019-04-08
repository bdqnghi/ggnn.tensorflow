void main()
{
 char a[1000];
 gets(a);
 int n;
 n=strlen(a);
 int b[n];
 int i=0,j=0,c=0,k=0;
 while(i<n)
 {
  b[i]=1;
  i++;
 }
 i=0;
 while(k<n/2)
 {
  c=0;
  if(b[i]==0)
   i++;
  else
  {
   j=i+1;
   while(c==0)
   {
    if(b[j]==0)
     j++;
    else
    {
     if(a[j]==a[i])
      i++,c=1;
     else
     {
      printf("%d %d\n",i,j);
      k++;
      b[i]=0;
      i=0;
      b[j]=0;
      c=1;
     }
    }
   }
  }
 }
}
