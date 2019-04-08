int main()
{
	int n,i,j,y,d[13],m1,m2,a,b;
	d[1]=31;
	d[2]=28;
	d[3]=31;
	d[4]=30;
	d[5]=31;
	d[6]=30;
	d[7]=31;
	d[8]=31;
	d[9]=30;
	d[10]=31;
	d[11]=30;
	d[12]=31;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int num=0;
		scanf("%d%d%d",&y,&m1,&m2);
		if(m1>m2)
		{
			a=m1;b=m2;
		}
		else
		{
			a=m2;b=m1;
		}
		if((y%4==0)&&(y%100!=0)||(y%400==0))
			d[2]++;
		for(j=b;j<a;j++)
			num+=d[j];
		if(num%7==0)
			printf("YES\n");
		else
			printf("NO\n");
		d[2]=28;
	}
		
	return 0;
}