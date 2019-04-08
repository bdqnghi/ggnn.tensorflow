 int main()
 
 {
	 int f(int m);	
    
	 int month[5],day[5],year[5],tian[5],i;
	 for(i=0;i<=4;i++)
	    scanf("%d %d %d",&year[i],&month[i],&day[i]);
	 for(i=0;i<=4;i++)
	 {
		 if(year[i]%4==0&&year[i]%100!=0||year[i]%400==0)
	  {if (month[i]<=2)
	    tian[i]=f(month[i])+day[i];
		else
		tian[i]=f(month[i])+day[i]+1;
		}
	else
	    tian[i]=f(month[i])+day[i];
		printf("%d\n",tian[i]);
	}	
	 return 0;
 }
 int f(int m)
 {      
   int sum;
  switch (m)
  {case 1: sum=0;
                         break;
   case 2:sum=31; 
                         break;
	case 3:sum=(31+28);
	                     break;
	case 4:sum=(31+28+31);
	                     break;
	case 5:sum=(31*2+28+30);
	                     break;
	case 6:sum=(31*3+28+30);
	                     break;
	case 7:sum=(31*3+28+30*2);
	                       break;
	case 8:sum=(31*4+28+30*2);
	                        break;
	case 9:sum=(31*5+28+30*2);
	                        break;
	case 10:sum=(31*5+28+30*3);
	                       break;
	case 11:sum=(31*6+28+30*3);
	                        break;
	case 12:sum=(31*6+28+30*4);
    
  }
  return (sum);
}
