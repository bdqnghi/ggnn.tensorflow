int main()
{
	int w,s,d,i,j,a[12];
	scanf("%d",&w);
	s=0;
	j=0;
	for(i=0;i<12;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)
		{
			s+=31;
		}
		else if(i==2)
		{
			s+=28;
		}
		else if(i==4||i==6||i==9||i==11)
		{
			s+=30;
		}
		d=s+13;
		d=d%7;
		if(((d+w-8==5)&&(d+w>8))||((d+w-1==5)&&(d+w<=8)))
		{
			a[j++]=i+1;
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%d",a[i]);
		if(i!=j-1)
		{
			printf("\n");
		}
	}
	return 0;
}