void paixu(int n,int*p)
{
 int i,j,k;
     for(i=0;i<=n-2;i++)
        {
           for(j=i+1;j<=n-1;j++)
              {
                 if(p[i]<p[j]){k=p[i];p[i]=p[j];p[j]=k;}                
              }               
        }
     
}
main()
{
 int  i,j,k,m,sum,n,u,p,t[1000], q[1000],c[1000];
 for(u=0;u<=1000;u++)
 {
 scanf("%d",&n);
 if(n==0) {break;}
 for(i=0;i<=n-1;i++)
    {
       scanf("%d",&t[i]);
    }  
 for(i=0;i<=n-1;i++)
    {
       scanf("%d",&q[i]);                
    }
 for(i=0;i<=n-1;i++){c[i]=-9;}
 paixu(n,t);
 paixu(n,q);
 for(i=0;i<=n-1;i++)
    {
      if(t[0]>q[0]){c[i]=200;for(k=0;k<=n-2-i;k++) {t[k]=t[k+1];} }
      else{for(j=n-1-i;j>=0;j--)
               {
                  if(t[j]<=q[j]){ if(t[j]==q[0])c[i]=0;else {c[i]=-200;}for(k=j;k<=n-2-i;k++) {t[k]=t[k+1];}  break;}            
               }
          }
      if(c[i]!=0&&c[i]!=200&&c[i]!=-200){if(t[0]<q[0]) c[i]=-200;else c[i]=0;for(k=0;k<=n-2-i;k++) {t[k]=t[k+1];}}
      for(k=0;k<=n-2-i;k++) {q[k]=q[k+1];}
      
    }
 for(sum=0,i=0;i<=n-1;i++)
 {sum=sum+c[i];}
 printf("%d\n",sum);
}
 
 
 
 
}
