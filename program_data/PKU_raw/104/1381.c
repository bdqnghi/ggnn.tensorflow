int step(int x1,int y1)
{
	if(x1==y1) return x1;
	if(x1>y1)
	{if(x1%2==0) return step(x1/2,y1);
	else return step((x1-1)/2,y1);
	}
	if(x1<y1)
	{if(y1%2==0) return step(x1,y1/2);
	else return step(x1,(y1-1)/2);
	}
}
int main()
{
	int x,y;
	cin>>x>>y;
	cout<<step(x,y)<<endl;
	return 0;
}