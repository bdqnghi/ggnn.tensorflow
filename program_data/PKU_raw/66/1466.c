int sum[1000000]={0};
const int pi=365*3+366;
int a[][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int jud,y,m,d,i,j,t,to=0;
	cin>>y>>m>>d;
	j=y;
	if(y>1)
	{
		if(j>2000)
		{
			for(i=0;;i++)
			{
				sum[i]=0;
				if(j<2000)
					break;
				sum[i]+=2000/4*pi;
				j-=2000;
			}
			sum[i]+=(j-1)%4*365;
			sum[i]+=(j-1)/4*pi;
		}
		else
		{
			i=0;
			sum[0]+=(y-1)%4*365;
			sum[0]+=(y-1)/4*pi;
		}
	}
	for(t=100;t<y;t+=100)
	{
		if(t%100==0&&t%400!=0)
		{
			sum[i]-=1;
		}
	}
	jud=(y%4==0&&y%100!=0||y%400==0);
	for(t=0;t<m-1;t++)
	{
		sum[i]+=a[jud][t];
	}
	sum[i]+=d-1;
	for(j=0;j<=i;j++)
	{
		to+=sum[j]%7;
	}
	switch(to%7)
	{
	case 6:cout<<"Sun."<<endl;break;
	case 0:cout<<"Mon."<<endl;break; 
	case 1:cout<<"Tue."<<endl;break; 
	case 2:cout<<"Wed."<<endl;break;
	case 3:cout<<"Thu."<<endl;break; 
	case 4:cout<<"Fri."<<endl;break; 
	case 5:cout<<"Sat."<<endl;break;
	}
	return 0;
}