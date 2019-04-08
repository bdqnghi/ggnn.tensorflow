int main()
{
	int a,b,c,d,e[12],i;
	e[1]=e[3]=e[5]=e[7]=e[8]=e[10]=e[12]=31;
	e[2]=28;
	e[4]=e[6]=e[9]=e[11]=30;
	d=0;
	scanf("%d %d %d",&a,&b,&c);
	if((a%4!=0)||(a%100==0&&a%400!=0))
	{
		for(i=1;i<b;i++)
		{
			d=d+e[i];
		}
		d=d+c;
	}
	else if((a%4==0&&a%100!=0)||(a%400==0))
	{
		for(i=1;i<b;i++)
		{
			e[2]=29;
			d=d+e[i];
		}
		d=d+c;
	}
	printf("%d",d);
	return 0;
}