main ()
{
     int a,b,c,d,e,m,n,i,j,k,l;
     for (k=0;k<100;k++)
     {
     scanf("%d",&n);
     if (n!=0)
     {
     int f[1000];
     int g[1000];
     for (i=0;i<1000;i++)
     {
         f[i]=0;
         g[i]=0;
     }
     for (i=0;i<n;i++)
     {
         scanf("%d",&f[i]);
     }
     for (i=0;i<n;i++)
     {
         scanf("%d",&g[i]);
     }
     for (i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++)
         {
                           if (f[i]>f[j])
                           {
                                         a=f[i];
                                         f[i]=f[j];
                                         f[j]=a;
                           }
                           if (g[i]>g[j])
                           {
                                         b=g[i];
                                         g[i]=g[j];
                                         g[j]=b;
                           }
         }
     }
     c=0;
     d=n-1;
     e=0;
     m=n-1;
     for (i=0;i<n;i++)
     {
         if (f[i]==g[c])
         {
                       for(l=m;l>i;l--)
                       {
                                       if (f[l]<g[d])
                                       {
                                                        e=e-200;
                                                        d=d-1;
                                                        break;
                                       }
                                       else if (f[l]==g[d])
                                       {
                                            if(f[i]<g[d])
                                            e=e-200;
                                            d=d-1;
                                            break;
                                       }
                                       else 
                                       {
                                            e=e+200;
                                            d=d-1;
                                            m=m-1;
                                       }
                       }
                       if (l==i)
                       c++;
         }
         else if (f[i]>g[c])
         {
                       c++;
                       e=e+200;
         }
         else if (f[i]<g[c])
         {
                       d=d-1;
                       e=e-200;
         }              
         if (c>d)              
         break;
     }
     printf("%d\n",e);
     }
     else if (n==0)
     break;
     }
     getchar ();
     getchar ();
}    
