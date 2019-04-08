int main()
{
 int x,y,z,a,c,d,e,m;
    scanf("%d %d %d",&x,&y,&z);
 
 a=(x-1)/4+(x-1)/400-(x-1)/100;
 c=x+a-1;
     if((x%4==0&&x%100!=0)||(x%400==0))
  {
   switch(y)
   {
   case 1: d=z;
	   break;
   case 2: d=z+3;
	   break;
   case 3: d=z+4;
	   break;
   case 4: d=z;
	   break;
   case 5: d=z+2;
	   break;
   case 6: d=z+5;
	   break;
   case 7: d=z;
	   break;
   case 8: d=z+3; 
	   break;
   case 9: d=z+6;
	   break;
   case 10: d=z+1;
	   break;
   case 11: d=z+4;
	   break;
   case 12: d=z+6;
   }
  }
	 else
	 {
		 switch(y)
   {
   case 1: d=z;
	   break;
   case 2: d=z+3;
	   break;
   case 3: d=z+4+6;
	   break;
   case 4: d=z+6;
	   break;
   case 5: d=z+2+6;
	   break;
   case 6: d=z+5+6;
	   break;
   case 7: d=z+6;
	   break;
   case 8: d=z+3+6; 
	   break;
   case 9: d=z+6+6;
	   break;
   case 10: d=z+1+6;
	   break;
   case 11: d=z+4+6;
	   break;
   case 12: d=z+6+6;
   }
	 }

     e = c+ d;
    m = e%7;

	switch(m)
	{
      case 1: printf("Mon.\n");
		  break;
	  case 2: printf("Tue.\n");
		  break;
	  case 3: printf("Wen.\n");
		  break;
	  case 4: printf("Thu.\n");
		  break;

	  case 5: printf("Fri.\n");
		  break;
	  case 6: printf("Sat.\n");
		  break;
	  case 0: printf("Sun.\n");

	}
	
	return 0;
}
