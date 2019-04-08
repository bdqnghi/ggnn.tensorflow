int lp(int x,int y)
{
	int z=0;
	if(x>2 && ((y%4==0 && y%100!=0) || y%400==0))
		z=1;
	return(z);
}
int main()
{
	unsigned int year,month,day;
	unsigned int v=0,num=0;
	unsigned int i,j,k,n[11]={3,0,3,2,3,2,3,3,2,3,2};
	scanf("%d%d%d",&year,&month,&day);
	j=(year-1)/400;
	k = year-j*400;
	if(k>=100)
	{
		if(k>=200)
		{
			if(k>=300)
			{
				i=3;
			}
			else
			{
				i=2;
			}
		}
		else
		{
			i=1;
		}
	}
	else
	{
		i=0;
	}
	v=(year-1)/4-3*j-i;
	num=(year-1-v)+2*v;
	for(i=0;i<month-1;i++)
	{
		num+=n[i];
	}
	if(lp(month,year)==1)
	{
		num+=1;
	}
	num+=day;
	switch( num%7 )
	{
		case 0:printf("Sun.\n");break;
		case 1:printf("Mon.\n");break;
		case 2:printf("Tue.\n");break;
		case 3:printf("Wed.\n");break;
		case 4:printf("Thu.\n");break;
		case 5:printf("Fri.\n");break;
		case 6:printf("Sat.\n");break;
	}
	return 0;
}
