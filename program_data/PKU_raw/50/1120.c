
int main()
{
	int w,i,j,day,x,y;
	int a[12];
	scanf("%d",&w);
	a[0]=31;
	a[2]=31;
	a[4]=31;
	a[6]=31;
	a[7]=31;
	a[9]=31;
	a[11]=31;
	a[1]=28;
	a[3]=30;
	a[5]=30;
	a[8]=30;
	a[10]=30;
	for(i=0;i<12;i++)
	{
		day=0;
		for(j=0;j<i;j++)
			day+=a[j];
		day+=12;
		x=day%7;
		y=x+w;
		if(y%7==5)
			printf("%d\n",i+1);
	}
	return 0;
}