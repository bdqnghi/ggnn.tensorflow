int main()
{
	int w,i,j,a[12],day=0;
	scanf("%d",&w);
	a[0]=0;
	a[1]=a[3]=a[5]=a[7]=a[8]=a[10]=31;
	a[2]=28,a[4]=a[6]=a[9]=a[11]=30;
	for(j=1;j<=12;j++)
	{
		day=0;
		for(i=0;i<j;i++)
			day=day+a[i];
		if(((day+12)+w)%7==5)
			printf("%d\n",j);
	}
	return 0;
}