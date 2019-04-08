int main()
{int sy,sm,sd,ey,em,ed,i,sum1=0,sum2=0,Sum=0;
 int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
 cin>>sy>>sm>>sd;
 cin>>ey>>em>>ed;
     if((sy%100!=0&&sy%4==0)||(sy%400==0))
	 {for(i=sm;i<=12;i++) {sum1=sum1+b[i];}
       sum1=sum1-sd;
	 }
     else
	 {for(i=sm;i<=12;i++) {sum1=sum1+a[i];}
      sum1=sum1-sd;
	 }
	 if((ey%100!=0&&ey%4==0)||(ey%400==0))
	 {for(i=em;i<=12;i++) {sum2=sum2+b[i];}
       sum2=sum2-ed;
	 }
     else
	 {for(i=em;i<=12;i++) {sum2=sum2+a[i];}
      sum2=sum2-ed;
	 }
  
	 if(sy==ey) Sum=sum1-sum2;
	else
	 {
		 for(i=sy+1;i<=ey;i++)
		 {if((i%100!=0&&i%4==0)||(i%400==0)) Sum=Sum+366;
		 else Sum=Sum+365;
		 }
           Sum=Sum+sum1-sum2;
	  }
     
  
 
  cout<<Sum;

 return 0;
}