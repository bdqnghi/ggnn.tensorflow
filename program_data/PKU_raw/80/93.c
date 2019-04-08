int star[3],end[3],sum=0;
int month1[13]={0,31,60,91,121,152,182,213,244,274,305,335,366};
int month2[13]={0,31,59,90,120,151,181,212,243,273,304,334,365};
int countday(int ch1[3],int ch2[3]);
int countmonth(int ch1[3],int ch2[3]);
int countyear(int ch1[3],int ch2[3]);
int countday(int ch1[3],int ch2[3])

{
	sum=sum-ch1[2]+ch2[2];
	countmonth(star,end);

	return(sum);
}
int countmonth(int ch1[3],int ch2[3])
{
	if((ch1[0]%4==0&&ch1[0]%100!=0)||(ch1[0]%400==0))
	{
		if((ch2[0]%4==0&&ch2[0]%100!=0)||(ch2[0]%400==0))
		{
			sum=sum-month1[ch1[1]-1]+month1[ch2[1]-1];
		}
		else
		{
			sum=sum-month1[ch1[1]-1]+month2[ch2[1]-1];
			
		}
	}
	else
	{
		if((ch2[0]%4==0&&ch2[0]%100!=0)||(ch2[0]%400==0))
		{
			sum=sum-month2[ch1[1]-1]+month1[ch2[1]-1];
		}
		else
		{
			sum=sum-month2[ch1[1]-1]+month2[ch2[1]-1];


		}
	}
	countyear(star,end);
	return(sum);
}



int countyear(int ch1[3],int ch2[3])
{
	while (ch1[0]<ch2[0])
		{
			if((ch1[0]%4==0&&ch1[0]%100!=0)||(ch1[0]%400==0))
				sum=sum+366;
			else
				sum=sum+365;
			ch1[0]++;
		}
		return(sum);
}



void main()
{
	int i,j;
	for(i=0;i<3;i++)
		scanf("%d",&star[i]);
	for(j=0;j<3;j++)
		scanf("%d",&end[j]);
	countday(star,end);
	printf("%d\n",sum);
}