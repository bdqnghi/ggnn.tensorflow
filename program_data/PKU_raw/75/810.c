int t1[1000]={0};
int t2[1000]={0};
int num=0,m=0;
void judge(int x);
int main()
{
	char start[10000];
	char end[10000];
	int i=0,k=0;
	cin.getline(start,10000);
	cin.getline(end,10000);
	while(start[i]!='\0')
	{
		if(start[i]==',') num++;
		i++;
	}
	num=num++;
	cout<<num<<' ';
	i=0;
	while(start[i]!='\0')
	{
		if(start[i]==',') 
		{
			k++;
		}
		else
		{
			t1[k]=10*t1[k]+(start[i]-'0');
		}
		i++;
	}
	i=0,k=0;
	while(end[i]!='\0')
	{
		if(end[i]==',') 
		{
			k++;
		}
		else
		{
			t2[k]=10*t2[k]+(end[i]-'0');
		}
		i++;
	}
	for(int j=0;j<1001;j++)
	{
		judge(j);
	}
	cout<<m;
	return 0;
}
void judge(int x)
{
	int count=0;
	for(int i=0;i<num;i++)
	{
		if(x>=t1[i]&&x<t2[i]) count++;
	}
	if(count>m) m=count;
}
