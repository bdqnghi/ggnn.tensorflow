void h(double a[],int n)
{
   double m;
   int i,j;
   for(i=0;i<n-1;i++)
   {
     for(j=i+1;j<n;j++)
     {
        if(a[i]>a[j])
        {
          m=a[i];
          a[i]=a[j];
          a[j]=m;
        }
     }
   }

}
main()
{
       int n,j,i;
       scanf("%d",&n);
       int*p=(int*)malloc(n*sizeof(int));
       double*q=(double*)malloc(n*sizeof(double));
       char c[10];
       int m=0,f=0;
       for(int i=0;i<n;i++)
       {
          scanf("%s %lf",c,&q[i]);
          if(c[0]-'m'==0)
          {p[i]=1;m++;}
          if(c[0]-'f'==0)
          {p[i]=0;f++;}
       }
       double*a=(double*)malloc(m*sizeof(double));
       double*b=(double*)malloc(f*sizeof(double));
       for(i=0,j=0;i<n;i++)
       {
          if(p[i]==1)
          {a[j]=q[i];j++;}
       }
        for(i=0,j=0;i<n;i++)
       {
          if(p[i]==0)
          {b[j]=q[i];j++;}
       }
       h(a,m);
       h(b,f);
       for(i=0;i<m;i++)
       {
        printf("%.2lf ",a[i]);
       }
       for(i=f-1;i>=0;i--)
       {
        if(i==0)
        printf("%.2lf",b[i]);
        else
        printf("%.2lf ",b[i]);
       }
       getchar();
       getchar();
       getchar();
}