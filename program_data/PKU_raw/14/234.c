main()
{
      int n;
      int i,j,k,s,p;
      struct student
      {int id;
      int yuwen;
      int shuxue;
      int zongfen;
      };
      struct student stu[100000];
      struct student temp;
      scanf("%d",&n);
      for(p=0;p<n;p++)
      {
          scanf("%d %d %d",&stu[p].id,&stu[p].yuwen,&stu[p].shuxue);
          stu[p].zongfen=stu[p].yuwen+stu[p].shuxue;
      }
      for(j=0;j<3;j++)
      {
          for(i=0;i<n-1-j;i++)
          {
              if(stu[i].zongfen>=stu[i+1].zongfen)
              {
                  temp.id=stu[i].id;
                  temp.yuwen=stu[i].yuwen;
                  temp.shuxue=stu[i].shuxue;
                  temp.zongfen=stu[i].zongfen;
                  stu[i].id=stu[i+1].id;
                  stu[i].yuwen=stu[i+1].yuwen;
                  stu[i].shuxue=stu[i+1].shuxue;
                  stu[i].zongfen=stu[i+1].zongfen;
                  stu[i+1].id=temp.id;
                  stu[i+1].yuwen=temp.yuwen;
                  stu[i+1].shuxue=temp.shuxue;
                  stu[i+1].zongfen=temp.zongfen;
              }
          }
      }
      for(k=n-1;k>n-4;k--)
      {
          printf("%d %d\n",stu[k].id,stu[k].zongfen);
      }
}