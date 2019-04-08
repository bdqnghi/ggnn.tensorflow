
int main()
{
	int a[11];
	int y,m,d,i,leap,total=0;
	scanf("%d%d%d",&y,&m,&d);
	if(y%4==0)
	{
		if(y%100==0)
		{
			if(y%400==0)
				leap=1;
			else leap=0;
		}
		else leap=1; 
	}
	else leap=0;
	if(leap) a[1]=29;
	else a[1]=28;
	a[0]=31;
	a[2]=31;
	a[3]=30;
	a[4]=31;
	a[5]=30;
	a[6]=31;
	a[7]=31;
	a[8]=30;
	a[9]=31;
	a[10]=30;
	a[11]=31;
	for(i=0;i<m-1;i++)
		total+=a[i];
	total+=d;
	printf("%d",total);
	return 0;
}