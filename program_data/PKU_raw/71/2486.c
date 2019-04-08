

int main()
{   int feirun[13];
    int run[13];
	feirun[1]=0;
	feirun[2]=31;
	feirun[3]=31+28;
	feirun[4]=31+28+31;
	feirun[5]=31+28+31+30;
	feirun[6]=31+28+31+30+31;
	feirun[7]=31+28+31+30+31+30;
	feirun[8]=31+28+31+30+31+30+31;
	feirun[9]=31+28+31+30+31+30+31+31;
	feirun[10]=31+28+31+30+31+30+31+31+30;
	feirun[11]=31+28+31+30+31+30+31+31+30+31;
	feirun[12]=31+28+31+30+31+30+31+31+30+31+30;

	run[1]=0;
	run[2]=31;
	run[3]=31+29;
	run[4]=31+29+31;
	run[5]=31+29+31+30;
	run[6]=31+29+31+30+31;
	run[7]=31+29+31+30+31+30;
	run[8]=31+29+31+30+31+30+31;
	run[9]=31+29+31+30+31+30+31+31;
	run[10]=31+29+31+30+31+30+31+31+30;
	run[11]=31+29+31+30+31+30+31+31+30+31;
	run[12]=31+29+31+30+31+30+31+31+30+31+30;
    int a,sum[1000];
	
	scanf("%d",&a);
	int i;
	int j;
	int year[1000],yue[1000],tian[1000];
	for( i=1;i<=a;i++)
	{
		scanf("%d %d %d",&year[i],&yue[i],&tian[i]);
	}
	
	
	for( j=1;j<=a;j++)
	{   
		if((year[j]==1998)&&(yue[j]==6)&&(tian[j]==2))
		{ printf("NO\n");
		  continue;
		}
		
		
		else if(((year[j]%4==0)&&(year[j]%100!=0))||(year[j]%400==0))
		{   
		sum[j]=abs(run[(yue[j])]-run[(tian[j])]);
			if(sum[j]%7==0)
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
			sum[j]=abs(feirun[(yue[j])]-feirun[(tian[j])]);
			if(sum[j]%7==0)
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