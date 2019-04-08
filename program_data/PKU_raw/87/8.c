int main()
{
	int a,b,c,d,e,f,s=0;
	while(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0)
	{
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	if(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0)
	{s+=12*3600+d*3600+e*60+f;
	s=s-(a*3600+b*60+c);
	printf("%d\n",s);}
	s=0;
	}
	return 0;
	}
	
