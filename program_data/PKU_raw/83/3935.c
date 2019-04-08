int main()
{
	int n,i,j,d;
	int g01[10];
	float g02[10],GPA=0,e=0,sum01=0,sum02=0;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&g01[i]);
	}
	for(j=0;j<n;j++)
	{
		scanf("%d",&d);
		if(d>=90&&d<=100)
			e=4.0;
		if(d>=85&&d<=89)
			e=3.7;
		if(d>=82&&d<=84)
			e=3.3;
		if(d>=78&&d<=81)
			e=3.0;
		if(d>=75&&d<=77)
			e=2.7;
		if(d>=72&&d<=74)
			e=2.3;
		if(d>=68&&d<=71)
			e=2.0;
		if(d>=64&&d<=67)
			e=1.5;
		if(d>=60&&d<=63)
			e=1;
		if(d<=60)
			e=0;
		g02[j]=e*g01[j];
	}
	for(i=0;i<n;i++)
	{
		sum01=sum01+g02[i];
		sum02=sum02+g01[i];
	}
	GPA=sum01/sum02;
	printf("%.2f",GPA);
}