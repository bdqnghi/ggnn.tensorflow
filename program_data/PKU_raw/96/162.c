int main()
{
  char a[100],d[100],f[100];
  int n,i,j,l,k;
  int b[100],c[100];
  scanf("%s",a);
  j=strlen(a);
  for(i=0;i<j;i++)
  b[i]=a[i]-'0';
  if(j<3&&b[0]*10+b[1]<13)
    { 
     printf("0\n");
     printf("%d",b[0]*10+b[1]);
     }
     else if(j==1)
     {
          printf("0\n");
          printf("%d",b[0]);
     }
   else
 { for(i=0;i<j;i++)
 {
       c[i]=b[i]/13;
       if(c[i]==0)
       b[i+1]=b[i]*10+b[i+1];     
       else
       b[i+1]=(b[i]-13*c[i])*10+b[i+1];
       d[i]=c[i]+'0';
       k=b[i]-13*c[i];
 }
 d[j]='\0';
 j=strlen(d);
 if(d[1]=='0')
 { 
 for(i=0;i<(j-2);i++)
 {
                   d[i]=d[i+2];
 }
 d[j-2]='\0';
 
 }
 else
 {
     for(i=0;i<(j-1);i++)
     {
                       d[i]=d[i+1];
                       }
                       d[j-1]='\0';
 }
  printf("%s\n",d);
   printf("%d",k);
 }
  getchar();getchar(); 
}

