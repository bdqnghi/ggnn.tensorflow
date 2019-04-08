int main()
{
	int y1,m1,d1;
	int y2,m2,d2;
	int s1,s2,s,x1,x2;
	int z[14]={0,0,31,59,90,120,151,181,212,243,273,304,334,365};
	scanf("%d%d%d",&y1,&m1,&d1);
	scanf("%d%d%d",&y2,&m2,&d2);
	x1=y1%2800-1;
    s1=x1*365+z[m1]+y1/4+x1/400-y1/100+d1;
	x2=y2%2800-1;
    s2=x2*365+z[m2]+y2/4+x2/400-y2/100+d2;
	if(y1%4==0)
	{
		s=s2-s1+1;
	}
	else s=s2-s1;
	printf("%d",s);
	




	return 0;
}