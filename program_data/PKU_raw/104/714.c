int up(int x);
int main()
{
	int x1,y1;//??????
	cin>>x1>>y1;
	int x[100],y[100];
	int m=2,n=2;//x,y???
	x[1]=x1;
	y[1]=y1;
	if((x1==1)||(y1==1))
		cout<<1;
	else
	{
		int g=0;//????
		while(g==0)
		{
			x[m]=up(x[m-1]);
			if(x[m]==1)
				g=1;
			else m++;
	    }
		int f=0;//????
		while(f==0)
		{
			y[n]=up(y[n-1]);
			if(y[n]==1)
				f=1;
			else n++;
	    }
		int h=0;// ????
		while(h==0)
		{
			if(x[m]==y[n])
			{
				m--;
				n--;
			}
			else
			{
				cout<<x[m+1];
				h=1;
			}
		}



	}
	return 0;
}
int up(int x)
{
	if(x%2==0)
		return x/2;
	else
		return (x-1)/2;//????????
}
