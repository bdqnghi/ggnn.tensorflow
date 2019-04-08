int main()
{
	int y1,m1,d1,s1;int y2,m2,d2,s2;
	int i,s=0;
	int a[5000];
	scanf("%d%d%d",&y1,&m1,&d1);
	scanf("%d%d%d",&y2,&m2,&d2);
	for(i=y1;i<=y2;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0) a[i]=1;
		else a[i]=0;
	}
	switch(m1)
	{
	case 1:s1=d1;break;
	case 2:s1=31+d1;break;
	case 3:s1=d1+31+28+a[y1];break;
	case 4:s1=d1+31+28+31+a[y1];break;
	case 5:s1=d1+31+28+31+30+a[y1];break;
	case 6:s1=d1+31+28+31+30+31+a[y1];break;
	case 7:s1=d1+31+28+31+30+31+30+a[y1];break;
	case 8:s1=d1+31+28+31+30+31+30+31+a[y1];break;
	case 9:s1=d1+31+28+31+30+31+30+31+31+a[y1];break;
	case 10:s1=d1+31+28+31+30+31+30+31+31+30+a[y1];break;
	case 11:s1=d1+31+28+31+30+31+30+31+31+30+31+a[y1];break;
	case 12:s1=d1+31+28+31+30+31+30+31+31+30+31+30+a[y1];break;
	}
	switch(m2)
	{
	case 1:s2=d2;break;
	case 2:s2=31+d2;break;
	case 3:s2=d2+31+28+a[y2];break;
	case 4:s2=d2+31+28+31+a[y2];break;
	case 5:s2=d2+31+28+31+30+a[y2];break;
	case 6:s2=d2+31+28+31+30+31+a[y2];break;
	case 7:s2=d2+31+28+31+30+31+30+a[y2];break;
	case 8:s2=d2+31+28+31+30+31+30+31+a[y2];break;
	case 9:s2=d2+31+28+31+30+31+30+31+31+a[y2];break;
	case 10:s2=d2+31+28+31+30+31+30+31+31+30+a[y2];break;
	case 11:s2=d2+31+28+31+30+31+30+31+31+30+31+a[y2];break;
	case 12:s2=d2+31+28+31+30+31+30+31+31+30+31+30+a[y2];break;
	}
	if(y1==y2) printf("%d",s2-s1);
	if(y2-y1==1) printf("%d",365+a[y1]-s1+s2);
	if(y2-y1>1)
	{
		for(i=y1+1;i<y2;i++)
		{
			s=s+365+a[i];
		}
		printf("%d",s+365+a[y1]-s1+s2);
	}
	return 0;
}