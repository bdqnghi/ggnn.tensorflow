int main()
{
	int a,b,c,d,e,f,m,i;
	for(i=0;i>=0;i++)
	{
		scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0)
		{
			break;
		}
		else
		{
			m=(d+12)*3600+e*60+f-a*3600-b*60-c;
			printf("%d\n",m);
		}
	}
	return 0;
}