int main ()
	{   unsigned int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
 unsigned int d,m;
 if( (a%4==0&&a%100!=0)||(a%400==0))
	{ switch(b)
	  {
		   case 1:m=0;break;
           case 2:m=31;break;
		   case 3:m=31+29;break;
		   case 4:m=31+29+31;break;
		   case 5:m=31+29+31+30;break;
		   case 6:m=31+29+31+30+31;break;
		   case 7:m=31+29+31+30+31+30;break;
		   case 8:m=31+29+31+30+31+30+31;break;
		   case 9:m=31+29+31+30+31+30+31+31;break;
		   case 10:m=31+29+31+30+31+30+31+31+30;break;
		   case 11:m=31+29+31+30+31+30+31+31+30+31;break;
		   case 12:m=31+29+31+30+31+30+31+31+30+31+30 ;break;
			   }
 d=m+c    ;  
 }   
else 
{switch(b)
	  {
		   case 1:m=0;break;
           case 2:m=31;break;
		   case 3:m=31+28;break;
		   case 4:m=31+28+31;break;
		   case 5:m=31+28+31+30;break;
		   case 6:m=31+28+31+30+31;break;
		   case 7:m=31+28+31+30+31+30;break;
		   case 8:m=31+28+31+30+31+30+31;break;
		   case 9:m=31+28+31+30+31+30+31+31;break;
		   case 10:m=31+28+31+30+31+30+31+31+30;break;
		   case 11:m=31+28+31+30+31+30+31+31+30+31;break;
		   case 12:m=31+28+31+30+31+30+31+31+30+31+30 ;break;
			   }
 d=m+c ;      
};
 unsigned int x,sum,f;
x=(a-1)/4-(a-1)/100+(a-1)/400;
sum=(a-1)*1+x+d;
f=sum%7;
switch(f)
{
                  case 0:printf("Sun.\n");break;
	              case 1:printf("Mon.\n");break;
		          case 2:printf("Tue.\n");break;
			      case 3:printf("Wed.\n");break;
				  case 4:printf("Thu.\n");break;
				  case 5:printf("Fri.\n");break;
				  case 6:printf("Sat.\n");break;
}

return 0;}