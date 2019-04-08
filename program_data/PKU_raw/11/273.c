int main() 
{ 
  int year[5], month[5], day[5], total[5],i=0;
  for(;i<=4;i++)
  {

  scanf("%d %d %d", &year[i], &month[i], &day[i]); 
  }
   for(i=0;i<=4;i++)
  {
  switch(month[i])
  {
		case 1: total[i]=day[i];break;
		case 2: total[i]=31+day[i];break;
		case 3: total[i]=31+28+day[i];break;
		case 4: total[i]=31+28+31+day[i];break;
		case 5: total[i]=31+28+31+30+day[i];break;
		case 6: total[i]=31+28+31+30+31+day[i];break;
		case 7: total[i]=31+28+31+30+31+30+day[i];break;
		case 8: total[i]=31+28+31+30+31+30+31+day[i];break;
		case 9: total[i]=31+28+31+30+31+30+31+31+day[i];break;
		case 10: total[i]=31+28+31+30+31+30+31+31+30+day[i];break;
		case 11: total[i]=31+28+31+30+31+30+31+31+30+31+day[i];break;
		case 12: total[i]=31+28+31+30+31+30+31+31+30+31+30+day[i];break;
  }

  if ( (year[i]%400==0||year[i]%4==0&&year[i]%100!=0) && month[i]>2 )  total[i]+=1;
  printf("%d\n",total[i]);
  }
  return 0;
}
