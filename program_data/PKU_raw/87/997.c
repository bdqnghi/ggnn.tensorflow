int a,b,c,d,e,f,i;
int sum;
int main()
{
	while(scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f))
	{		if(a==0)
			break;
	else
	{
		sum=0;
	sum+=d*3600;
	sum+=e*60;
	sum+=f;
	sum+=(12-a-1)*3600;
	sum+=(60-b-1)*60;
	sum+=60-c;
    printf("%d\n",sum);
	}
	}
	return 0;
}