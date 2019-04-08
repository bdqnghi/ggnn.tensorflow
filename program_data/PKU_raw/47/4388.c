main()
{     
      int a[300],n,i;
      int *p;
      p=a;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      scanf("%d",p+i);
      for(i=0;i<n;i++)
      *(p+n+99-i)=*(p+i);
      for(i=100;i<100+n-1;i++)
      printf("%d ",*(p+i));
      printf("%d",*(p+100+n-1));
}