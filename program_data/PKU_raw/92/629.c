

int a[10000]={0},b[10000]={0},c[1000]={0};
int i,n,j,S1,S2,S3,t=0,m=0;
int main ()
{  void Order();
   scanf ("%d",&n);
   while (n!=0)
   { S1=0;S3=0;S2=n-1;
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);    
     for(i=0;i<n;i++)
     scanf("%d",&b[i]);
     Order();i=n-1;
     while (i>=S3)
     {
       while ((a[S3]>b[S1])&&(i>S3))
       { S3++;S1++;m+=200;}
       if (a[i]<b[S2])
       {m-=200;S1++;i--;continue;}
       if (a[i]>b[S2])
       {m+=200;S2--;i--;continue;}
       if (a[i]==b[S2])
         { if (a[i]<b[S1]) m-=200;
           S1++;i--;} }      
      c[t]=m;
     t++;m=0;  
    scanf ("%d",&n);}
   for (i=0;i<t;i++)
   printf("%d\n",c[i]);
   }
void Order()
{int i,j,t;
 for(i=0;i<n;i++)
 for(j=i+1;j<n;j++)
 {if (a[j]>a[i])
  {t=a[j];
   a[j]=a[i];
   a[i]=t;}
  if (b[j]>b[i])
  {t=b[j];
   b[j]=b[i];
   b[i]=t;}}}
                 
                
                
                
                
                
                
                
                     

