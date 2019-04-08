

struct point{
	double x;
	double y;
}point[1000];

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>point[i].x>>point[i].y;
	double max;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++){
			double temp=sqrt((point[i].x-point[j].x)*(point[i].x-point[j].x)+(point[i].y-point[j].y)*(point[i].y-point[j].y));
			if(temp>max)
				max=temp;
		}
	cout<<max;
	return 0;

}