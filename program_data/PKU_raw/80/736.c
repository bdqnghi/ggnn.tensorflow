int djt(int year,int month,int day);
int main()
{
	  int a,b,c,d,e,f,g,h,s,i;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	g=djt(a,b,c);h=djt(d,e,f);s=h-g;
	for(i=a;i<d;i++)
	{
		if(i%400==0||(i%4==0&&i%100!=0))
			s+=366;
		else
			s+=365;
	}
			printf("%d\n",s);
	return 0;
}
int djt(int year,int month,int day)
{
	int sum,leap;
	  switch(month) /*?????????????*/
  {
    case 1:sum=0;break;
    case 2:sum=31;break;
    case 3:sum=59;break;
    case 4:sum=90;break;
    case 5:sum=120;break;
    case 6:sum=151;break;
    case 7:sum=181;break;
    case 8:sum=212;break;
    case 9:sum=243;break;
    case 10:sum=273;break;
    case 11:sum=304;break;
    case 12:sum=334;break;
    default:printf("data error");break;
  }
  sum=sum+day; /*????????*/
  if(year%400==0||(year%4==0&&year%100!=0)) /*???????*/
    leap=1;
  else
    leap=0;
  if(leap==1&&month>2) /*??????????,????????*/
    sum++;
  return sum;
}
