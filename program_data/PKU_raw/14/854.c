struct student
{
       int ID;
       int Chinese;
       int Math;
       int Score;
};
main()
{
      int n,i,first=0,ifirst,second=0,isecond,third=0,ithird;
      scanf("%d",&n);
      struct student STUDENT_NUM[n];
      for(i=0;i<n;i++)
      {
                      scanf("%d %d %d",&STUDENT_NUM[i].ID,&STUDENT_NUM[i].Chinese,&STUDENT_NUM[i].Math);
                      STUDENT_NUM[i].Score=STUDENT_NUM[i].Chinese+STUDENT_NUM[i].Math; 
      }
      for(i=0;i<n;i++)
      {
                      if(first<STUDENT_NUM[i].Score)
       {
                                     first=STUDENT_NUM[i].Score;
                                     ifirst=i;
       }
      }
      for(i=0;i<n;i++)
      {
                      if(second<STUDENT_NUM[i].Score&&STUDENT_NUM[i].Score<=first&&i!=ifirst)
                      {
                                     second=STUDENT_NUM[i].Score;
                                     isecond=i;
                      }
      }
      for(i=0;i<n;i++)
      {
                      if(third<STUDENT_NUM[i].Score&&STUDENT_NUM[i].Score<=second&&i!=ifirst&&i!=isecond)
                      {
                                     third=STUDENT_NUM[i].Score;
                                     ithird=i;
                      }
      }
      printf("%d %d\n",STUDENT_NUM[ifirst].ID,first);
      printf("%d %d\n",STUDENT_NUM[isecond].ID,second);
      printf("%d %d\n",STUDENT_NUM[ithird].ID,third);
      
      
      
}
