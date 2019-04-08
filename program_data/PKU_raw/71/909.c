
int main()
{
	int i,n,y,m1,m2,j;
    int days[] = {   0, 31, 28, 31, 30, 31, 30,
                    31, 31, 30, 31, 30, 31    };
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{int t=0,d1=1,
		d2=1;
		scanf("%d%d%d",&y,&m1,&m2);
		if ((y%4==0)&&(y%100!=0)||(y%400==0))
		{days[2]=29;}
		else
		{days[2]=28;}
		
		for (i=0;i<m1;i++)
		{
			d1=d1+days[i];
		}
		for (i=0;i<m2;i++)
		{
			d2=d2+days[i];
		}
		t=d2-d1;
		if(t%7==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}