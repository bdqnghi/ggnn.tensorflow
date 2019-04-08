

int main()
{
	struct point
	{
		int x;
		int y;
		int z;
	}p[10];
	struct distance
	{
		int x1,x2;
		int y1,y2;
		int z1,z2;
		double d;
	}d[46],t;
	int n,i,j,k=0,m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>p[i].x>>p[i].y>>p[i].z;
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			d[k].x1=p[i].x;
			d[k].x2=p[j].x;
			d[k].y1=p[i].y;
			d[k].y2=p[j].y;
			d[k].z1=p[i].z;
			d[k].z2=p[j].z;
			d[k].d=sqrt(((double)d[k].x1-(double)d[k].x2)*((double)d[k].x1-(double)d[k].x2)+((double)d[k].y1-(double)d[k].y2)*((double)d[k].y1-(double)d[k].y2)+((double)d[k].z1-(double)d[k].z2)*((double)d[k].z1-(double)d[k].z2));
			k++;
		}
	m=k;
	struct distance *pointer1,*pointer2;
	pointer1=d;
	pointer2=&t;
	for(i=0;i<m-1;i++)
		for(j=m-1;j>i;j--)
		{
			if((pointer1+j)->d>(pointer1+j-1)->d)
			{
				*pointer2=*(pointer1+j);
				*(pointer1+j)=*(pointer1+j-1);
				*(pointer1+j-1)=*pointer2;
			}
		}
	for(k=0;k<m;k++)
		{	
			cout<<"("<<d[k].x1<<","<<d[k].y1<<","<<d[k].z1<<")"<<"-"<<"("<<d[k].x2<<","<<d[k].y2<<","<<d[k].z2<<")"<<"="
			<<fixed<<setprecision(2)<<d[k].d<<endl;
	}
	return 0;
}