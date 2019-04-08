main()
{
      void paixu(float *p,int x);
      float h[45],m[45],f[45];
      char a[45][10];
      int i,n,j1=1,j2=1;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
          scanf("%s%f",a[i],&h[i]);
      }
      for(i=1;i<=n;i++)
      {
          if(a[i][0]=='m'){m[j1]=h[i];j1++;}
          if(a[i][0]=='f'){f[j2]=h[i];j2++;}
      }//tiqu
      paixu(m,j1-1);
      paixu(f,j2-1);
      for(i=1;i<=j1-1;i++)
      {
          printf("%.2f ",m[i]);
      }
      for(i=j2-1;i>=2;i--)
      {
          printf("%.2f ",f[i]);
      }   printf("%.2f\n",f[1]);
}

void paixu(float *p,int x)
{
     int k,mo;
     float huan;
     for(mo=x-1;mo>=1;mo--)
     {
         for(k=1;k<=mo;k++)
         {
              if(p[k]>p[k+1]) 
              {
                  huan=p[k];p[k]=p[k+1];p[k+1]=huan;
}    }   }    }