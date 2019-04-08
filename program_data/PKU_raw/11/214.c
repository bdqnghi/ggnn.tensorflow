
int main(int argc, char* argv[])
{
	int year,month,day;
	scanf("%d%d%d",&year,&month,&day);
	int n=0;
	static int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	for(i=0;i<month;i++)
	{
		n=days[i]+n;
	}
	n=day+n;
	if((year%100==0&&year%400==0)||(year%100!=0&&year%4==0))
		n++;
	printf("%d\n",n);
	return 0;
}
