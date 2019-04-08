int main()
{
	struct ti{
		int h1,f1,m1,h2,f2,m2;
	}a;
	int i,j,k,e,sum;
	scanf("%d%d%d%d%d%d",&a.h1,&a.f1,&a.m1,&a.h2,&a.f2,&a.m2);
	while(1)
	{
		if(a.h1 == 0 && a.f1 == 0 && a.m1 == 0 && a.h2 == 0 && a.f2 == 0 && a.m2 == 0 ) break;
		sum=(a.h2+12-a.h1)*3600+(a.f2-a.f1)*60+a.m2-a.m1;
		printf("%d\n",sum);
	   	scanf("%d%d%d%d%d%d",&a.h1,&a.f1,&a.m1,&a.h2,&a.f2,&a.m2);
	}
return 0;
}
