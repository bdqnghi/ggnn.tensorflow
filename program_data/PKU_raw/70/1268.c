struct point{
	double x;
	double y;
};
struct point dian[101];
double dis(struct point dian[],int i,int j){
	double x=dian[i].x-dian[j].x;
	double y=dian[i].y-dian[j].y;
	double dis=(x*x+y*y);
	return sqrt(dis);
}
int main()
{
	int n,i,j;
	int t=0,k=0;
	double a[102];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>dian[i].x>>dian[i].y;
	 for(i=0;i<n;++i)
		 for(j=i+1;j<n;++j)
		{ int t=0;
	       while(t<k+1&&abs(a[t]-dis(dian,i,j))>1e-6)t++;
		   if(t==k+1){
		   a[k]=dis(dian,i,j);
		   k++;
		   }
	 }
	  for(i=0;i<k;i++)
		 for(j=0;j<k-i;j++)
			 if(a[j]<a[j+1]){
				 double temp=a[j];
				 a[j]=a[j+1];
				 a[j+1]=temp;
			 }
			 cout<<a[0]<<endl;

	//while(1);
	return 0;
} 