int main()
{
	int a,b,c,d,e,f;
	int s=0;
	while(1)
	{
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a==0 &&b==0 &&c==0 &&d==0 &&e==0 &&f==0)
	{
		break;
	}
	d=d+12;
	s=s+(60-c);
    b=b+1;
	if(b==60)
	{
		a=a+1;
	}
	else
	{
		s=s+(60-b)*60;
        a=a+1;
	}
	s=s+(d-a)*3600+e*60+f;
	printf("%d\n",s);
	s=0;
	}
	return 0;
}