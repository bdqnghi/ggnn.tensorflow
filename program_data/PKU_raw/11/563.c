
int main()
{
	int a,b,c,i,e;
	int s[12];
	int d=0;
	scanf("%d %d %d",&a,&b,&c);
    if(a%4==0&&a%100!=0||a%400==0)
		s[1]=29;
	else
		s[1]=28;
	s[0]=31;s[2]=31;s[3]=30;s[4]=31;s[5]=30;s[6]=31;s[7]=31;s[8]=30;s[9]=31;s[10]=30;s[11]=31;
    for(i=1;i<=b;i++)
	{
		d=d+s[i-2];
	}
	e=d+c;
	printf("%d",e);
	return 0;
}

