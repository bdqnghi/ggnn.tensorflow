
int fun(int y,int m,int d)
{
	int a[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	int i,c;
	c=0;
	for(i=0;i<m;i++)
   	c=c+a[i];
    c=c+d;
	if((m>2)&&(((y%4==0)&&(y%100!=0))||(y%400==0)))
		c++;
	return c;
}

int main()
{
	int i,a,b,c;
	for(i=0;i<100;i++)
		if(cin>>a>>b>>c)
		cout<<fun(a,b,c)<<endl;
    return 0;
}

