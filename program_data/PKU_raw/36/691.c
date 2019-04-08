main()
{
int num1[52],num2[52],i,k,flag=1;
char a[20],b[20],n1,n2;
scanf("%s%s",a,b);
n1=strlen(a);
n2=strlen(b);
  for(i=0;i<52;i++)
  {
  num1[i]=0;
  num2[i]=0;
  }
  for(i=0;i<n1;i++)
  {
   if(a[i]>=65&&a[i]<=90)
   {
   k=a[i]-65;
   num1[k]++;
   }
   if(a[i]>=97&&a[i]<=122) 
   {
   k=a[i]-71;
   num1[k]++;
   }
  }
  
  for(i=0;i<n2;i++)
  {
   if(b[i]>=65&&b[i]<=90)
   {
   k=b[i]-65;
   num2[k]++;
   }
   if(b[i]>=97&&b[i]<=122) 
   {
   k=b[i]-71;
   num2[k]++;
   }
  }
  for(i=0;i<52;i++)
  {
  if(num1[i]!=num2[i]) flag=0;
  
  }
  if(flag) printf("YES");
  else printf("NO");
}