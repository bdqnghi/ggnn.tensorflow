int main()
{
    int u=0,b=0,n,i,d=0,j,c[1000]={0};
 char a[1000],w[1000];
 scanf("%d",&n); 
 for (i=0;i<n;i++) 
 {
    if (i==0)
    {
     a[0]='2';
     continue;
    }
    for (j=0;j<=0.4*n;j++)
    {
        if (  (a[j]-'0'<0)||(a[j]-'0'>9)  )
           a[j]='0';
       b=a[j]-'0';
       if (b*2>=10)
       {
       c[j+1]=1;
       a[j]=(b*2)%10+'0'+c[j];
       c[j]=0;
       }
       if (b*2<10)
       {
                  a[j]=b*2+'0'+c[j];
                   c[j]=0;
       }
     
     }

 }
 for (int t=strlen(a);t>=0;t--)
 {
 if (  (a[t]-'0'>=0)  &&  (a[t]-'0'<=9)  )
  {
  w[d]=a[t];
  d++;
  }
 }

  for (i=0;i<strlen(w);i++)
  {
   if (w[i]!='0')
   {
   u=i;
   break;
   }
  }
   for (i=u;i<strlen(w);i++)
{
   if (  (w[i]-'0'>=0)  &&  (w[i]-'0'<=9)  )
   printf("%c",w[i]);
}
if (n==0)
printf("1");
   }
