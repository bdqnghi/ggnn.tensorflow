/*????  ??*/
struct distance
{
	int x1,y1,z1,x2,y2,z2;
	double s;
}d[45],temp;

int main()
{
	int n,i,j,k,a[10][3];
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<3;j++)
			cin>>a[i][j];}
	k=0;
	while(k<n*(n-1)/2){
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				d[k].x1=a[i][0];
				d[k].y1=a[i][1];
				d[k].z1=a[i][2];
				d[k].x2=a[j][0];
				d[k].y2=a[j][1];
				d[k].z2=a[j][2];
				d[k].s =sqrt((d[k].x1-d[k].x2)*(d[k].x1-d[k].x2)
					+(d[k].y1-d[k].y2)*(d[k].y1-d[k].y2)
					+(d[k].z1-d[k].z2)*(d[k].z1-d[k].z2));
				k++;}}}
	for(i=0;i<n*(n-1)/2;i++){
		for(j=0;j<n*(n-1)/2-1;j++){
			if(d[j].s<d[j+1].s)
			{temp=d[j];d[j]=d[j+1];d[j+1]=temp;}}}
	for(i=0;i<n*(n-1)/2;i++)
		cout<<"("<<d[i].x1<<","<<d[i].y1<<","<<d[i].z1
			<<")-("<<d[i].x2<<","<<d[i].y2<<","<<d[i].z2<<")="
			<<fixed<<setprecision(2)<<d[i].s<<endl;
	return 0;
}

