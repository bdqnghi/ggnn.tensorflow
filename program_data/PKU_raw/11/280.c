
int main()
{   
	long int a[5],b[5],c[5],ts[5],i;
	for(i=1;i<=5;i++)
	scanf("%ld %ld %ld",&a[i],&b[i],&c[i]);
	for(i=1;i<=5;i++)
	{
	switch(b[i])
	{
case 1:ts[i]=c[i];break;
case 2:ts[i]=c[i]+31;break;
case 3:ts[i]=c[i]+59;break;
case 4:ts[i]=c[i]+90;break;
case 5:ts[i]=c[i]+120;break;
case 6:ts[i]=c[i]+151;break;
case 7:ts[i]=c[i]+181;break;
case 8:ts[i]=c[i]+212;break;
case 9:ts[i]=c[i]+243;break;
case 10:ts[i]=c[i]+273;break;
case 11:ts[i]=c[i]+304;break;
case 12:ts[i]=c[i]+334;break;
	}
	
	if((a[i]%4==0&&a[i]%100!=0||a[i]%400==0)&&b[i]>2)
		ts[i]=ts[i]+1;
	
	printf("%ld",ts[i]);
	printf("\n");
	
	}
	return 0;
}
	