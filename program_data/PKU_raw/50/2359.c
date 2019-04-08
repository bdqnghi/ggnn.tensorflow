int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
struct Date
{
    int  iLab,iMonth,iDay;
} DNow;

void Date_Walk()
{
	for(int x=1;x<=12;x++)
	{
		for(int y=1;y<=month[x];y++)
		{
		    DNow.iLab++;
			if(DNow.iLab>7) DNow.iLab=1;
			if(y==13 && DNow.iLab==5) cout<<x<<endl;
		}
	}
	return;
}

int main()
{
	int w;
	cin>>w;
	DNow.iMonth=1,DNow.iDay=1,DNow.iLab=w-1;
	Date_Walk();
	return 0;
}
	