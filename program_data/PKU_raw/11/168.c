int rennian(int y)
{
	if((y%4==0&&y%100!=0)||y%400==0)
		return 1;
	else
		return 0;
}
int main()
{
	int y,m,d,i,a=0,b;
	scanf("%d %d %d",&y,&m,&d);	
	int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(rennian(y)==1)
	{
		days[2]++;
	}
	for(i=0;i<m;i++)
	{
		a+=days[i];
	}
	b=a+d;
    printf("%d",b);
	return 0;
}
