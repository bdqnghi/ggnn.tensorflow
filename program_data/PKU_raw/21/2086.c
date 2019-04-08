void main()
{int n,i,j,k,t,max,min,pian,a[300],all,b[20];
 scanf("%d",&n);
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 min=a[0];
 max=a[0];
 all=a[0];
 for(i=1;i<n;i++)
   {all=all+a[i];
    if(a[i]>max)
        max=a[i];
    if(a[i]<min)
        min=a[i];
   }
 min=min*n;
 max=max*n;
 pian=(max-all)>(all-min)?(max-all):(all-min);
 j=0;
 for(i=0;i<n;i++)
    if(((a[i]*n-all)==pian)||((a[i]*n-all)==(-pian)))
        {b[j]=a[i];
         j++;}
 
 for(i=0;i<j;i++)
      for(k=i+1;k<j;k++)
           if(b[k]<b[i])
               {t=b[i];
                b[i]=b[k];
                b[k]=t;
               }
 printf("%d",b[0]);
 for(i=1;i<j;i++)
       printf(",%d",b[i]);
}

 