struct date
{
	int year;
	int month;
	int day;
} data[3];
int pingrun[3] = {0, 365, 366}, len[3] = {0};
int monthDays[3][13]={{0,0,0,0,0,0,0,0,0,0,0,0,0},{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
int nian, yue, ri,leap[3],jiange[3];
int i, j;
int compute(int,int,int);
void canliang(char[],int);
int main()
{
	long int sum = 0, res;
    data[1].year=data[1].month=data[1].day = 0;
    data[2].year=data[2].month=data[2].day = 0;
	char rizi1[500],rizi2[500];
	cin.getline(rizi1,12);
	//cin.get();
	cin.getline(rizi2,12);
	//cout << rizi[1] << endl;
	//cout << rizi[2] << endl;
    canliang(rizi1,1);
	canliang(rizi2,2);
	nian = abs(data[2].year - data[1].year);
	//cout << "jiange1" << jiange[1]<<" " <<  "jiange2" << jiange[2] << endl;
   //	cout << nian << endl;
	if (nian == 0)
	{
		cout << abs(jiange[2]-jiange[1]) << endl;
	}
	else if (nian == 1)
	{
		cout << (pingrun[leap[1] + 1] - jiange[1] + jiange[2]) << endl;
	}
	else if (nian >= 2)
	{
		for (i = data[1].year + 1; i < data[2].year; i++)
		{
			res = (i % 4 == 0 && i % 100 != 0) || (i % 400 == 0);
			sum += pingrun[res+1];
		}
		sum += jiange[2];
		res = pingrun[leap[1]+1]-jiange[1];
		sum += res;
	    cout << sum << endl;
	}
		return 0;
}
    
int compute(int x, int y,int z) //z=1???z=0??
{//int monthDays[3][13]={{0,0,0,0,0,0,0,0,0,0,0,0,0},{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	int cd = 0, i = 1;
	if (x == 1)
	{
		return y;
	}
    while (i < x)
	{
		cd += monthDays[1+z][i];
		i++;
	}
	return cd + y;
}
void canliang(char str[],int x)
{
    int len, i = 0;
	len = strlen(str);
	while(str[i]== ' ') {i++;}
	while (isdigit(str[i]))
	{
		data[x].year = data[x].year * 10 + str[i] - '0';
		i++;
	}
	while (str[i]==' ') {i++;}
	while (isdigit(str[i]))
	{
		data[x].month = data[x].month * 10 + str[i] -'0';
		i++;
	}
	while (str[i]==' ') {i++;}
	while((str[i]>= '0') && (str[i] <= '9') && i <len)
	{
		data[x].day = data[x].day * 10 + str[i] - '0';
		i++;
	}
	//cout << data[x].year << ' ' << data[x].month << ' ' << data[x].day << endl;
	leap[x] = ((data[x].year % 4 == 0 && data[x].year % 100 != 0) || (data[x].year % 400 == 0));
	jiange[x] = compute(data[x].month,data[x].day,leap[x]);  //???????????????
//	cout << jiange[x] << endl;
}

	
 
