int main()
{
    int aa[10001],i,n,a,b,j,a1,a2,s=0,max,bb[10001],min,p;
    scanf("%d",&n);
    min=10000;max=0;
    for (i=0;i<10001;i++) aa[i]=0;
    for (i=0;i<n;i++)
     {scanf("%d%d",&a,&b);
     if (a<min) min=a;
     if (b>max) max=b;
     for (j=a;j<b;j++)  aa[j]=1;}
     for (i=min;i<=max;i++)
      if (aa[i]==1) s++; else
          { 
            a1=i;
            a2=i-s;
            p=s;
           break;
          }
          if ((max-min)!=p)  printf("no"); else
        printf("%d %d",a2,a1);
        return 0;
}