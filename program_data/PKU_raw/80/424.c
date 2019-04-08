int main()
{
	int sy,sm,sd,ey,em,ed;
	int d=0;
	cin>>sy>>sm>>sd>>ey>>em>>ed;
	for(int i=sy;i<ey;i++)
		if((i%4==0&&i%100!=0)||(i%400==0))
			d=d+366;
		else
			d=d+365;
	//cout<<d;
	int p[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(int j=1;j<sm;j++)
		d=d-p[j];
	for(int k=1;k<em;k++)
		d=d+p[k];
	if(((ey%4==0&&ey%100!=0)||(ey%400==0))&&(em>2))
		d=d+1;
         d=d+ed-sd;
	cout<<d;
	return 0;
}