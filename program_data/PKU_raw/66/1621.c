int main()
{
	int n,a,m,d,i,sum=0,day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d", &a, &m, &d);
	a--;
	sum+=a%7*365+a/4-a/100+a/400;sum%=7;
	a++;
	if(a%4==0 && a%100!=0 || a%400==0)
		day[2]++;
	for(i=1;i<m;i++)
		sum+=day[i];
	sum+=d;
	sum%=7;

	switch(sum)
	{
		case 1:cout<<"Mon."<<endl;break;
		case 2:cout<<"Tue."<<endl;break;
		case 3:cout<<"Wed."<<endl;break;
		case 4:cout<<"Thu."<<endl;break;
		case 5:cout<<"Fri."<<endl;break;
		case 6:cout<<"Sat."<<endl;break;
		case 0:cout<<"Sun."<<endl;break;
	}
	return 0;
}
