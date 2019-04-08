

int countyear(int a,int b)
{
				int i,t;
				t=365*(b-a-1);
	for(i=a+1;i<b;i++)
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			t+=1;
		return t;
}
			
			
			
			
			
int countday(int a,int b,int c)
{
	int t;
	switch(b)
	{
	  case 1:if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
			   t=366-c+1;
		   else
			   t=365-c+1;break;
	  case 2:if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
			   t=366-31-c+1;
		   else
			   t=365-31-c+1;break;
	  case 3:t=31-c+31+30+31+30+31+31+30+31+30+1;break;
	  case 4:t=30-c+31+30+31+30+31+31+30+31+1;break;
	  case 5:t=31-c+31+30+31+30+31+31+30+1;break;
	  case 6:t=30-c+31+30+31+30+31+31+1;break;
	  case 7:t=31-c+31+30+31+30+31+1;break;
	  case 8:t=31-c+31+30+31+30+1;break;
	  case 9:t=30-c+31+30+31+1;break;
	  case 10:t=31-c+31+30+1;break;
	  case 11:t=30-c+31+1;break;
	  case 12:t=31-c+1;break;
	  default:break;
	}
	return t;
}
void main()
{

	int year[2],month[2],day[2],sum,a,b;

	scanf("%d%d%d%d%d%d",&year[0],&month[0],&day[0],&year[1],&month[1],&day[1]);
	if(year[0]==year[1])
	{
		sum=countday(year[0],month[0],day[0]);
		a=countday(year[1],month[1],day[1]);
		sum=sum-a;
	}
	else
	{
		sum=countyear(year[0],year[1]);
		a=countday(year[0],month[0],day[0]);
		b=countday(year[1],month[1],day[1]);
		
		if((year[1] % 4 == 0 && year[1] % 100 != 0) || (year[1] % 400 == 0))
			b=366-b;
		else
			b=365-b;
		sum+=(a+b);
	}
	printf("%d\n",sum);
}


