int main()
{
	int year,mon,day,num=0,i,a[11];
	scanf("%d %d %d",&year,&mon,&day);
	a[0]=a[2]=a[4]=a[6]=a[7]=a[9]=31;
	a[3]=a[5]=a[8]=a[10]=30;
	if(year%4!=0)
	{
		a[1]=28;
	}
	else if(year%100==0)
	{
		if(year%400==0)
		{
			a[1]=29;
		}
		else a[1]=28;
	}
	else a[1]=29;
	for(i=0;i<mon-1;i++)
	{
		num=num+a[i];
	}
	num=num+day;
	printf("%d",num);
	return 0;
}
