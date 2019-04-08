  int main()
  {
	  int year,month,monthd[12]={31,28,31,30,31,30,31,31,30,31,30,31},day,di=0,i;
	  scanf("%d %d %d",&year,&month,&day);
	  for(i=1;i<month;i++)
	  { 
		  di=di+monthd[i-1];
	  }
	  di=di+day;
	  if((year%4)!=0||(year%400)!=0)
	  {
		  printf("%d\n",di);
	  }
	  else
		  printf("%d",di+1);
	  return 0;
  }