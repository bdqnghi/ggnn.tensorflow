int main()
{
	int a[13];
	int n;
	scanf("%d",&n);
	a[1]=31;
	a[2]=0;
	a[3]=31;
	a[4]=30;
	a[5]=31;
	a[6]=30;
	a[7]=31;
	a[8]=31;
	a[9]=30;
	a[10]=31;
	a[11]=30;
	a[12]=31;
	int i;
	int year,y1,y2,tmp;
	int sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&year,&y1,&y2);
		if(y1>y2)
		{
			tmp=y1;
			y1=y2;
			y2=tmp;
		}
		if((year%4==0&&year%100!=0)||year%400==0)
		{
			a[2]=29;
			for(;y1<y2;y1++)
			{
				sum+=a[y1];
			}
			if(sum%7==0)
			{
				printf("YES\n");
			}
			else 	printf("NO\n"); 

			sum=0;
		}

		else
		{
			a[2]=28;
			for(;y1<y2;y1++)
			{
				sum+=a[y1];
			}
			if(sum%7==0)
			{
				printf("YES\n");
			}
			else 	printf("NO\n"); 

			sum=0;
		}
	}
	return 0;
}





