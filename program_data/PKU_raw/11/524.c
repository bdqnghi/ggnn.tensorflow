

int main()
{ int year,mon,day;
  scanf("%d %d %d",&year,&mon,&day);
  
  
  int re;
  if((year%4==0&&year%400==0&&year%100==0)||(year%4==0&&year%100!=0))
  { 
  
  switch(mon)
  {
  case 1: re=day; break;
  case 2: re=31+day; break;
  case 3: re=31+29+day; break;
  case 4: re=31+29+31+day; break;
  case 5: re=31+29+31+30+day; break;
  case 6: re=31+29+31+30+31+day; break;
  case 7: re=31+29+31+30+31+30+day; break;
  case 8: re=31+29+31+30+31+30+31+day; break;
  case 9: re=31+29+31+30+31+30+31+31+day; break;
  case 10: re=31+29+31+30+31+30+31+31+30+day; break;
  case 11: re=31+29+31+30+31+30+31+31+30+31+day; break;
  case 12: re=31+29+31+30+31+30+31+31+30+31+30+day; break;
  }
  }
  else 

  {switch(mon)
  {
	  case 1: re=day; break;
      case 2: re=31+day; break;
      case 3: re=31+28+day; break;
	  case 4: re=31+28+31+day; break;
	  case 5: re=31+28+31+30+day; break;
	  case 6: re=31+28+31+30+31+day; break;
	  case 7: re=31+28+31+30+31+30+day; break;
	  case 8: re=31+28+31+30+31+30+31+day; break;
      case 9: re=31+28+31+30+31+30+31+31+day; break;
	  case 10: re=31+28+31+30+31+30+31+31+30+day; break;
	  case 11: re=31+28+31+30+31+30+31+31+30+31+day; break;
				  case 12: re=31+28+31+30+31+30+31+31+30+31+30+day; break;
  }
					  
  }
  printf("%d",re);
  return 0;
}
