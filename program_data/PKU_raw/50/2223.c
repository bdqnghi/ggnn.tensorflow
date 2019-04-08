
main()
{
      int n;
      int i,day;
      scanf("%d",&n);
      for(i=1;i<=12;i++)
      {
      if(i==1)
      day=12;
      else if(i==2||i==4||i==6||i==8||i==9||i==11)
      day=day+31;
      else if(i==3)
      day=day+28;
      else
      day=day+30;
      
      if((day%7+n)%7==5)
      printf("%d\n",i);
      }
     
      
      
      
      }
