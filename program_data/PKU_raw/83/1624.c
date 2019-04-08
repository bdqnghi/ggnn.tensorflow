int main()
{
	float*xuefen;
	float*chengji;
	float*GPA;
	float xf,cj,xuefensum=0,GPAsum=0;
	int n,i;
	scanf("%d",&n);
	xuefen=(float*)malloc(sizeof(float)*n);
	chengji=(float*)malloc(sizeof(float)*n);
	GPA=(float*)malloc(sizeof(float)*n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&xf);
		*(xuefen+i)=xf;
	}
	for(i=0;i<n;i++)
	{
		scanf("%f",&cj);
		*(chengji+i)=cj;
	}
    for(i=0;i<n;i++)
	{
		if(*(chengji+i)>=90&&*(chengji+i)<=100)
		{
			*(GPA+i)=4.0;
		}
		else if(*(chengji+i)>=85&&*(chengji+i)<=89)
		{
			*(GPA+i)=3.7;
		}
		else if(*(chengji+i)>=82&&*(chengji+i)<=84)
		{
			*(GPA+i)=3.3;
		}
		else if(*(chengji+i)>=78&&*(chengji+i)<=81)
		{
			*(GPA+i)=3.0;
		}
		else if(*(chengji+i)>=75&&*(chengji+i)<=77)
		{
			*(GPA+i)=2.7;
		}
		else if(*(chengji+i)>=72&&*(chengji+i)<=74)
		{
			*(GPA+i)=2.3;
		}
		else if(*(chengji+i)>=68&&*(chengji+i)<=71)
		{
			*(GPA+i)=2.0;
		}
		else if(*(chengji+i)>=64&&*(chengji+i)<=67)
		{
			*(GPA+i)=1.5;
		}
		else if(*(chengji+i)>=60&&*(chengji+i)<=63)
		{
			*(GPA+i)=1.0;
		}
		else
		{
			*(GPA+i)=0;
		}
	}
	for(i=0;i<n;i++)
	{
		GPAsum+=(*(GPA+i))*(*(xuefen+i));
	}
	for(i=0;i<n;i++)
	{
		xuefensum+=*(xuefen+i);
	}
	printf("%.2f\n",GPAsum/xuefensum);
	return 0;
}