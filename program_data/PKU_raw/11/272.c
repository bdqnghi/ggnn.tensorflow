int leap(int a)
{
	int z;
	if ((a%4==0)&&(a%100!=0)||(a%400==0)) z=1;
	else z=0;
return z;
}
void main()
{
	int i,m;
	int n[5][3];
	int total[5];
	for(i=0;i<=4;i++) scanf("%d %d %d",&n[i][0],&n[i][1],&n[i][2]);
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<=4;i++)
	{
		month[1]=28+leap(n[i][0]);
	    total[i]=0;
	    for(m=0;m<=n[i][1]-2;m++) total[i]=total[i]+month[m];
	    total[i]=total[i]+n[i][2];
	    printf("%d\n",total[i]);
	}
}