

int main(int argc, char* argv[])
{
	int n,i,year,month1,month2,a,b;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&year,&month1,&month2);
		if(year%4==0 && year%100!=0 || year%400==0)
		{
			if(month1==1)
			{
				a=1;
			}
			else if(month1==2)
			{
				a=32;
			}
			else if(month1==3)
			{
				a=61;
			}
			else if(month1==4)
			{
				a=92;
			}
            else if(month1==5)
			{
				a=122;
			}
            else if(month1==6)
			{
				a=153;
			}
			else if(month1==7)
			{
				a=183;
			}
			else if(month1==8)
			{
				a=214;
			}
			else if(month1==9)
			{
				a=245;
			}
			else if(month1==10)
			{
				a=275;
			}
			else if(month1==11)
			{
				a=306;
			}
			else if(month1==12)
			{
				a=336;
			}
			if (month2==1)
			{
				b=1;
			}
			else if(month2==2)
			{
				b=32;
			}
			else if(month2==3)
			{
				b=61;
			}
			else if(month2==4)
			{
				b=92;
			}
            else if(month2==5)
			{
				b=122;
			}
            else if(month2==6)
			{
				b=153;
			}
			else if(month2==7)
			{
				b=183;
			}
			else if(month2==8)
			{
				b=214;
			}
			else if(month2==9)
			{
				b=245;
			}
			else if(month2==10)
			{
				b=275;
			}
			else if(month2==11)
			{
				b=306;
			}
			else if(month2==12)
			{
				b=336;
			}
		
			if((a-b)%7==0)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
		else
		{
			if(month1==1)
			{
				a=1;
			}
			else if(month1==2)
			{
				a=32;
			}
			else if(month1==3)
			{
				a=60;
			}
			else if(month1==4)
			{
				a=91;
			}
            else if(month1==5)
			{
				a=121;
			}
            else if(month1==6)
			{
				a=152;
			}
			else if(month1==7)
			{
				a=182;
			}
			else if(month1==8)
			{
				a=213;
			}
			else if(month1==9)
			{
				a=244;
			}
			else if(month1==10)
			{
				a=274;
			}
			else if(month1==11)
			{
				a=305;
			}
			else if(month1==12)
			{
				a=335;
			}
			if(month2==1)
			{
				b=1;
			}
			else if(month2==2)
			{
				b=32;
			}
			else if(month2==3)
			{
				b=60;
			}
			else if(month2==4)
			{ 
				b=91;
			}
            else if(month2==5)
			{
				b=121;
			}
            else if(month2==6)
			{
				b=152;
			}
			else if(month2==7)
			{
				b=182;
			}
			else if(month2==8)
			{
				b=213;
			}
			else if(month2==9)
			{
				b=244;
			}
			else if(month2==10)
			{
				b=274;
			}
			else if(month2==11)
			{
				b=305;
			}
			else if(month2==12)
			{
				b=335;
			}
			if((a-b)%7==0)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
	}	
	 return 0;
}

 
 
 
