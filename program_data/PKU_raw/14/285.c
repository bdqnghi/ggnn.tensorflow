
struct student
{
       long int  id;
       int chinese;
       int math;
};
main()
{
      long int i,maxi1,maxi2,maxi3,num;
      scanf("%d",&num);
      struct student a[num];
      for (i=0;i<num;i++)
      scanf("%d %d %d",&a[i].id,&a[i].chinese,&a[i].math);
      int maxpt1=0,maxpt2=0,maxpt3=0;
      for (i=0;i<num;i++)
      {
          if (maxpt1<a[i].chinese+a[i].math)
          {
                               maxpt3=maxpt2;
                               maxpt2=maxpt1;
                               maxpt1=a[i].chinese+a[i].math;
                               maxi3=maxi2;
                               maxi2=maxi1;
                               maxi1=a[i].id;                              
          }
          else if (maxpt2<a[i].chinese+a[i].math)
          {
                               maxpt3=maxpt2;
                               maxpt2=a[i].chinese+a[i].math;
                               maxi3=maxi2;
                               maxi2=a[i].id;                           
          }
          else if (maxpt3<a[i].chinese+a[i].math)
          {
                               maxpt3=a[i].chinese+a[i].math;
                               maxi3=a[i].id;                            
          }
      }
      printf("%d %d\n%d %d\n%d %d",maxi1,maxpt1,maxi2,maxpt2,maxi3,maxpt3);

}
