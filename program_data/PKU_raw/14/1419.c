int main()
{
   int n,i,j,q,w;
   scanf("%d",&n);
   int a[n],b[n],c[n],d[n];
   for(i=0;i<n;i++)
   {scanf("%d %d %d",&a[i],&b[i],&c[i]);
                    
                    }
     for(i=0;i<n;i++)
   {      d[i]=b[i]+c[i];
                    
                    }
    for(i=0;i<3;i++)
   {      for(j=i+1;j<n;j++)
   {       if(d[i]<d[j])
         {q=d[i];
         d[i]=d[j];
         d[j]=q;
         w=a[i];
         a[i]=a[j];
        a[j]=w;}
        
         
         
          
          }
                    
                    }
                       for(i=0;i<3;i++)
   {    printf("%d %d\n",a[i],d[i]);
                    
                    }
                    
      

    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    

}
