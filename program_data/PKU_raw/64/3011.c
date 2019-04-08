int main()
{
	int n,i,j,count=1;
	double	x[20],y[20],z[20],t;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>x[i]>>y[i]>>z[i];//?xyz??
	}
	struct position//?????????????
	{
		double x;double a;
		double y;double b;
		double z;double c;
		double d;
	}p[100];
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{   
			p[count].x=x[i];p[count].a=x[j];
		    p[count].y=y[i];p[count].b=y[j];
		    p[count].z=z[i];p[count].c=z[j];
			p[count].d=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));//???
			count++;
		}
	}
	for(i=count-1;i>0;i--)
	{
		for(j=1;j<i;j++)
		{
			if(p[j].d<p[j+1].d)
			{
				swap(p[j].x,p[j+1].x);
				swap(p[j].y,p[j+1].y);
                swap(p[j].z,p[j+1].z);
                swap(p[j].a,p[j+1].a);
                swap(p[j].b,p[j+1].b);
                swap(p[j].c,p[j+1].c);
                swap(p[j].d,p[j+1].d);//??????????
			}
		}
	}
	for(i=1;i<=count-1;i++)
	{
		cout<<'('<<(int)p[i].x<<','<<(int)p[i].y<<','<<(int)p[i].z<<')'<<'-'<<'('<<(int)p[i].a<<','<<(int)p[i].b<<','<<(int)p[i].c<<')'<<'='<<fixed<<setprecision(2)<<p[i].d<<endl;
	}
return 0;
}