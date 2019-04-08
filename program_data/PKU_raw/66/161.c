
int main()
{
   long y,m,d,a,b,c,z;
   long x1,x2,x3;
   scanf("%d%d%d",&y,&m,&d);
   a=(y-1)/4;
   b=(y-1)/100;
   c=(y-1)/400;
   x1=(365%7)*((y-1)%7)+a-b+c;
   x1=x1%7;
   if (y%4==0)
   {
	   switch(m)
       {
	   case 1:x2=0;break;
	   case 2:x2=31;break;
	   case 3:x2=60;break;
	   case 4:x2=91;break;
	   case 5:x2=121;break;
	   case 6:x2=152;break;
	   case 7:x2=182;break;
	   case 8:x2=213;break;
	   case 9:x2=244;break;
	   case 10:x2=274;break;
	   case 11:x2=305;break;
	   case 12:x2=335;break;
	   }
   }
      else
	  {
		  switch(m)
		  {
		  case 1:x2=0;break;
	      case 2:x2=31;break;
	      case 3:x2=59;break;
	      case 4:x2=90;break;
	      case 5:x2=120;break;
	      case 6:x2=151;break;
	      case 7:x2=181;break;
	      case 8:x2=212;break;
	      case 9:x2=243;break;
	      case 10:x2=273;break;
	      case 11:x2=304;break;
	      case 12:x2=334;break;
		  }
	  }
	x3=x1+x2+d;
    z=x3%7;

	switch(z)
	{
	case 0: printf("Sun.\n");break;
	case 1: printf("Mon.\n");break;
	case 2: printf("Tue.\n");break;
	case 3: printf("Wed.\n");break;
	case 4: printf("Thu.\n");break;
    case 5: printf("Fri.\n");break;
	case 6: printf("Sat.\n");break;
	}
	return 0;
}
