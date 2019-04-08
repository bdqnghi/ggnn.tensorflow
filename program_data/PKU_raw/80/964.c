int main()
{
 long a1,b1,c1,a2,b2,c2,i1,i2,sum1,sum2,d;
 scanf("%ld %ld %ld",&a1,&b1,&c1);
 scanf("%ld %ld %ld",&a2,&b2,&c2);
 sum1=0;
 sum2=0;
  for(i1=1;i1<a1;i1++)
  {
   if ((i1%4 ==0&&i1%100!=0)||(i1%400==0)) {sum1=sum1+366;}
   else {sum1=sum1+365;}
  }
 if ((a1%4==0&&a1%100!=0&&b1>2)||(a1%400==0)) {sum1=sum1+1;}
 switch(b1)
 {
  case 1:sum1=sum1;break;
  case 2:sum1=sum1+31;break;
  case 3:sum1=sum1+59;break;
  case 4:sum1=sum1+90;break;
  case 5:sum1=sum1+120;break;
  case 6:sum1=sum1+151;break;
  case 7:sum1=sum1+181;break;
  case 8:sum1=sum1+212;break;
  case 9:sum1=sum1+243;break;
  case 10:sum1=sum1+273;break;
  case 11:sum1=sum1+304;break;
  default:sum1=sum1+334;
  }
 sum1=sum1+c1;
 for(i2=1;i2<a2;i2++)
 {
  if((i2%4==0&&i2%100!=0)||(i2%400==0)) {sum2=sum2+366;}
  else {sum2=sum2+365;}
 }
 if ((a2%4==0&&a2%100!=0&&b2>2)||(a2%400==0)) {sum2=sum2+1;}
 switch(b2)
 {
  case 1:sum2=sum2;break;
  case 2:sum2=sum2+31;break;
  case 3:sum2=sum2+59;break;
  case 4:sum2=sum2+90;break;
  case 5:sum2=sum2+120;break;
  case 6:sum2=sum2+151;break;
  case 7:sum2=sum2+181;break;
  case 8:sum2=sum2+212;break;
  case 9:sum2=sum2+243;break;
  case 10:sum2=sum2+273;break;
  case 11:sum2=sum2+304;break;
  default:sum2=sum2+334;
  }
 sum2=sum2+c2;
 d=sum2-sum1;
 printf("%ld",d);
 return 0;
}

 
 