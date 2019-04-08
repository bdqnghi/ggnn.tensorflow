main()
{
      int n,i,j,p,n1,n2;
      char s[10];
      double c,t;
      double a[100],b[100];
      scanf("%d",&n);      
      n1=0; n2=0;
      for (i=1;i<=n;i++)
      {
          scanf("%s",s);
          scanf("%lf",&t);
          if (s[0]=='m') {n1++; a[n1]=t;}
          else {n2++; b[n2]=t;}
      }
      
      for (i=1;i<=n1-1;i++)
      {p=i;
       for (j=i+1;j<=n1;j++)
       if (a[j]<a[p]) p=j;
       c=a[i]; a[i]=a[p]; a[p]=c;
       }
       
       /*for (i=1;i<=n1;i++) printf("%.2lf ",a[i]);*/
       
       for (i=1;i<=n2-1;i++)
      {p=i;
       for (j=i+1;j<=n2;j++)
       if (b[j]>b[p]) p=j;
       c=b[i]; b[i]=b[p]; b[p]=c;
       }
       
       for (i=1;i<=n1;i++) printf("%.2lf ",a[i]);
       for (i=1;i<=n2;i++) if (i<n2) printf("%.2lf ",b[i]); else printf("%.2lf\n",b[i]);
       
}       
       
