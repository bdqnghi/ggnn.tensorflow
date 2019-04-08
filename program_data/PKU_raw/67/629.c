int main()
{
    int n;
    scanf("%d",&n);
    int a,b;
    scanf("%d %d",&a,&b);
    double x=(double)b/a;
    for(int i=1;i<n;i++)
    {
      int c,d;
      
      scanf("%d %d",&c,&d);
      double y=(double)d/c;
      if((y-x)>0.05)
      printf("better\n");   
      if((x-y)>0.05)
      printf("worse\n");
      if(fabs(y-x)<=0.05)
      printf("same\n");
    }
    getchar();
    getchar();
}

