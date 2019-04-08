struct Student
{
       int num;
       int chinese;
       int maths;
};
 struct qiansan
      {
             int num;
             int zongfen;
      }st[3]={{0,0},{0,0},{0,0}};
main()
{
      int n,i,k,c[10],j[10];
      int a[100001];
      scanf("%d",&n);
      struct Student std[100001];
      for(i = 0;i < n;i++)
      {
            scanf("%d %d %d",&std[i].num,&std[i].chinese,&std[i].maths);
      }
      for(i = 0;i < n;i++)
      {
            a[i] = std[i].chinese + std[i].maths;
      }
      for(i = 0;i < n;i++)
      {
          if(a[i]>st[0].zongfen)
          {
              st[2]=st[1];
              st[1]=st[0];
              st[0].zongfen=a[i];
              st[0].num=std[i].num;
          }
          else if(a[i] <= st[0].zongfen && a[i] > st[1].zongfen)
          {
              st[2]=st[1];
              st[1].zongfen=a[i];
              st[1].num=std[i].num;
          }
          else if(a[i] <= st[1].zongfen && a[i]>st[2].zongfen)
          {
              st[2].zongfen=a[i];
              st[2].num=std[i].num;
          }
      }
      for(i = 0;i < 3;i++)
      {
          printf("%d %d\n",st[i].num,st[i].zongfen);
      }
      getchar();
      getchar();

}
