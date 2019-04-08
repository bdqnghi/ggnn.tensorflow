int main()
{
	int y,m,d,s=0;
	scanf("%d%d%d",&y,&m,&d);
	if(m>=2){
	for(int i=1;i<m;i++)
	{
	  switch(i)
	  {
     case 1:
	 case 3:
   	 case 5:
	 case 7:
	 case 8:
	 case 10:
	 case 12:
		 {
			 s=s+31;
			 break;
		 }
	 case 2:
		 {
			 if((y%4==0&&y%100!=0)||y%400==0)
			 {
				 s=s+29;
			 }
			 else
			 {
				 s=s+28;
			 }
			 break;
		 }
	 default:
		 {
			 s=s+30;
			 break;
		 }
	  }
	}
	}
	  s=(d+s)%7;
	  int q;
	  q=(y-1)/4-(y-1)/100+(y-1)/400;
	  s=s+2*q+(y-q-1);
	  
      int a=s%7;
	  switch(a)
	  {
	      case 0:
		  {
			  printf("Sun.");
			  break;
		  }
	      case 1:
		  {
			  printf("Mon.");
			  break;
		  }
		  case 2:
		  {
			  printf("Tue.");
			  break;
		  }
		  case 3:
		  {
			  printf("Wed.");
			  break;
		  }
		  case 4:
		  {
			  printf("Thu.");
			  break;
		  }
		  case 5:
		  {
			  printf("Fri.");
			  break;
		  }
		  case 6:
		  {
			  printf("Sat.");
			  break;
		  }
	  }
	  return 0;
}
		  


