
void main()
{
  char a[300];
  int i,j,k,b[30];
  gets(a);
  for(i=0;i<=25;i++)
  {
    b[i]=0; 
  }  
  for(i=0;a[i]!=0;i++){}
  for(i=0,k=0;a[i]!='\0';i++)
   {
     if((a[i]>=97)&&(a[i]<=122))
       {b[(a[i]-97)]++;}
   }
  for(i=0;i<=25;i++)
  {
     if(b[i]>0)
     {
       printf("%c=%d\n",i+97,b[i]);k=1;  
     }

   }
  if(k==0) printf("No\n");
}