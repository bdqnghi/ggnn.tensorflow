int main()
{
	int year,m,d,i,x,k;
	int s=0;
	scanf("%d%d%d",&year,&m,&d);
     s=(year-1)*1+(year-1)/4+(year-1)/400-(year-1)/100;
	for (k=1;k<m;k++)
		{
			if(k==1||k==3||k==5||k==7||k==8||k==10 || k==12)
			{
				s+=31;
			}
			if(k==4||k==6||k==9||k==11)
			{
				s+=30;
			}
			if((k==2)&&(((year%4==0)&&(year%100!=0))||(year%400==0)))
			{
				s+=29;
			}
			else
			{
				s+=28;
			}
			
		}
		s+=d;
		x=s%7;
		if(x==1){
			printf("Mon.");
		}
	    if(x==2){
			printf("Tue.");
		}
		if(x==3){
			printf("Wed.");
		}
		if(x==4){
			printf("Thu.");
		}
		if(x==5){
			printf("Fri.");
		}
		if(x==6){
			printf("Sat.");
		}
		if(x==0){
			printf("Sun.");
		}
		return 0;
	}

