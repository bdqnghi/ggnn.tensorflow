  struct points
    {
       char name[30];
       int score1;
       int score2;
       char west;
       char leader;
       int essay;
	   int money;
    }points[100];
   int main()
   {
      int n,i,max=0,m=0;
       scanf("%d",&n);
      for(i=0;i<n;i++)
     {
      scanf("%s %d %d %c %c %d",points[i].name,&points[i].score1,&points[i].score2,&points[i].leader,&points[i].west,&points[i].essay);
	  points[i].money=0;
     }
  for(i=0;i<n;i++)
     {
        if(points[i].score1>90)
		{
			points[i].money=points[i].money+2000;
		}
        if(points[i].score1>85&&points[i].score2>80)
		{
              points[i].money=points[i].money+4000;
		}
        if(points[i].score1>85&&points[i].west=='Y')
		{
			points[i].money=points[i].money+1000;
		}
        if(points[i].score2>80&&points[i].leader=='Y')
		{
			points[i].money=points[i].money+850;
		}
        if(points[i].score1>80&&points[i].essay>=1)
		{
			points[i].money=points[i].money+8000;
		}
      }
    char *p=points[0].name;

  for(i=0;i<n;i++)
   {
        if( points[i].money>max)
		{
			max=points[i].money;
            p=points[i].name;
		} 
   }
   for(i=0;i<n;i++)
   {
	   m=m+points[i].money;
   }
   printf("%s\n",p);
   printf("%d\n",max);
   printf("%d\n",m);
   return 0;
}
