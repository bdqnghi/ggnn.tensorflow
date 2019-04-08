//****************???????????************
//****************???????*******************
//****************?????2012?12?12?*********
//****************???1200062701****************


struct c_in
{
	int x;
	int y;
}
sample[5000 * 9999];
struct c_out
{
	int m;
	int time;
}
name[5000 * 9999];
int main()
{
	int n, i, flag = 0; 
	cin >> n;                                         //???n??
	
	for(i = 0; ; i++)
	{
		cin >> sample[i].x >> sample[i].y;
		if((sample[i].x == 0)&&(sample[i].y == 0))
		{
			break;
		}
	}
	for(int j = 0; j < n; j++)                     //???????????
	{
		name[j].m = j;
		name[j].time = 0;
	}
	for(int j = 0; j < i; j++)                     //??????? 0 0 ?????
	{
		(name[sample[j].y].time)++;
	}
	for(int j = 0; j < n; j++)                     
	{
		if(name[j].time == n - 1)
		{
			cout << name[j].m;
			flag += 1;
		}
	}
	if(flag == 0)
	{
		cout << "NOT FOUND";
	}
	return 0;
}