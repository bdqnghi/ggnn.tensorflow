int main(int argc, char* argv[])
{
    int date,i,j,day[13]={0},month[13];
	scanf("%d",&date);
	for (i=1;i<=12;i++)
	{
		if (i==1)
		{
			month[i]=0;
		}
		if (i==2||i==4||i==6||i==8||i==9||i==11)
		{
			month[i]=31;
		}
		if (i==3)
		{
			month[i]=28;
		}
		if (i==5||i==7||i==10||i==12)
		{
			month[i]=30;
		}
	}
    for (j=1;j<=12;j++)
	{
		for (i=1;i<=j;i++)
		{
			day[j]=day[j]+month[i];
		}
	}
    for (j=1;j<=12;j++)
	{
		if ((day[j]+13-1+date)%7==5)
		{
			printf("%d\n",j);
		}
	}
	return 0;
}
