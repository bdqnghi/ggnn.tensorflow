int main()
{
	int d,y,m,k,x;
	char a[7][5]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
	int m1[15]={0,0,31,59,90,120,151,181,212,243,273,304,334,365};
	scanf("%d %d %d",&y,&m,&d);
	x=y%2800-1;
    k=x*365+m1[m]+y/4+x/400-y/100+d;
	k=k%7;
	printf("%s",a[k]);

	return 0;
}