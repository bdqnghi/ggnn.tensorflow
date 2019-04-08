int main()
{
    int n,t,i,j,k,x[110],y[110],z[110],a[500],aa[500],b[500],bb[500],c[500],cc[500],l;
    double s[110],ty;
    scanf("%d",&n);
    k=0;  
     for (i=0;i<n;i++)  scanf("%d%d%d",&x[i],&y[i],&z[i]);
   
    for (i=0;i<n-1;i++)
       for(j=i+1;j<n;j++)
       { s[k]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
         a[k]=(x[i]);
         b[k]=(y[i]);
         c[k]=(z[i]);
         aa[k]=(x[j]);
         bb[k]=(y[j]);
         cc[k]=(z[j]);
         
           k++;
       }

           for (i=k-1;i>0;i--)
       for(j=0;j<i;j++)
         if (s[j+1]>s[j])
         {
             ty=s[j+1];
             
             s[j+1]=s[j];
             s[j]=ty;
              t=a[j+1];
             a[j+1]=a[j];
             a[j]=t;
              t=b[j+1];
             b[j+1]=b[j];
             b[j]=t;
              t=c[j+1];
             c[j+1]=c[j];
             c[j]=t;
              t=aa[j+1];
             aa[j+1]=aa[j];
             aa[j]=t;
              t=bb[j+1];
             bb[j+1]=bb[j];
             bb[j]=t;
              t=cc[j+1];
             cc[j+1]=cc[j];
             cc[j]=t;
         }
        
         for (i=0;i<k;i++)
         printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[i],b[i],c[i],aa[i],bb[i],cc[i],s[i]);
      return 0;
}




