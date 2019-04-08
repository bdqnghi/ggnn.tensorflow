int main(int argc, char* argv[])
{
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n,y,m1,m2;
	scanf("%d",&n);
	int i;
	int j,count=0;
	for(i=0;i<n;i++)
	{
		count=0;
		days[2]=28;
		scanf("%d%d%d",&y,&m1,&m2);
		if((y%4==0)&&(y%100!=0)||(y%400==0))
		{
			days[2]++;
		}
		if(m1<m2)
		{
			for(j=m1;j<m2;j++)
			{
				count+=days[j];
			}
		}
		else 
		{
			for(j=m2;j<m1;j++)
			{
				count+=days[j];
			}
		}
		if(count%7==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	
	return 0;
}