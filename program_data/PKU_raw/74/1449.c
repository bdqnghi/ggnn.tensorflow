int main()
{
    long m,n,i,s=0;
    long v,j,k,sum=0;
    double h;
    int a[100],b[100];
    scanf("%d %d",&m,&n);
    for(j=m;j<=n;j=j+1)
    {
      v=1;sum=0;
      for(i=0;;i++){h=pow(10,(double)i);if((int)j/(int)h==0)break;}
      for(k=0;k<i;k++){h=pow(10,(double)k);a[v]=(int)j/(int)h;v++;}
      for(k=1;k<i;k++){b[k]=a[k]-a[k+1]*10;}
      b[k]=a[k];
      for(k=i;k>=1;k=k-1){h=pow(10,(double)(i-k));sum=sum+b[k]*(int)h;}
      if(sum==j)
      {
        for(k=2;j>k&&j%k!=0;k=k+1);
        if(k==j){s=s+1;if(s==1)printf("%d",sum);else printf(",%d",sum);}
      }
    }
    if(s==0)printf("no");
    return 0;
}