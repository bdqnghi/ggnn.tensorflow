
int main(int argc, char* argv[])
{
	int n,y,m1,m2,total1=0,total2=0,i=1,j=0;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{total1=0;total2=0;
		scanf("%d %d %d",&y,&m1,&m2);
		for( i=1; i<m1; i++)
	{
		if ( i ==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
		{
				total1 = total1 +31;
		}
		if ( i ==4 || i==6 || i==9 || i==11)
		{
				total1 = total1 +30;
		}
		 if ( i ==2)
		{
			if( (y%4==0&&y%100!=0) || y%400==0 )
				  total1 = total1 +29;
			else total1 = total1 +28;
		}
	}
	total1  =  total1 + 1;
	for( i=1; i<m2; i++)
	{
		if ( i ==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
		{
				total2 = total2 +31;
		}
		if ( i ==4 || i==6 || i==9 || i==11)
		{
				total2 = total2 +30;
		}
		 if ( i ==2)
		{
			if( (y%4==0&&y%100!=0) || y%400==0 )
				  total2 = total2 +29;
			else total2 = total2 +28;
		}
	}
	total2  =  total2 + 1;

	if((total1-total2)%7==0)
	{
		printf("YES\n");
		continue;
	}
	else
	{
		printf("NO\n");
		continue;
	}

	}
	
	return 0;
}
