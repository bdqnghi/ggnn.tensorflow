
int k;
int set(int i);
int num=0;
int currH=100000;
int MaxNum=0;
int a[100];
int b[100];
int main()
{
	int i;
	for(i=0;i<100;i++)
	{
		b[i]=0;
	}
	cin>>k;
	for(i=0;i<k;i++)
	{
		int j;
		cin>>j;
		a[i]=j;
	}
	set(0);
	cout<<MaxNum;
	return 0;
}

int set(int i)
{
	int lastNum=num;
	int lastcurrH=currH;
	if(i==k-1)
	{
		if(a[i]<=currH) num++;
		if(num>MaxNum) MaxNum=num;
		num=lastNum;
		currH=lastcurrH;
		return 0;
	}
		if(b[i]==0)  set(i+1);
	b[i]++;


	if(b[i]==1)    
	{
		if(a[i]<=currH) { currH=a[i];  num++;}
		set(i+1);
	}


	num=lastNum;
	currH=lastcurrH;
	b[i]=0;
	return 0;
}
