struct point{
	double x;
	double y;
	double z;
};
struct range{
    double a[3];
    double b[3];
    double x;
};
int main(){
struct point points[10];
struct range ranges[200];
int n;
cin>>n;
for(int i=0;i<n;i++)
cin>>points[i].x>>points[i].y>>points[i].z;
int k=0;
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++){
ranges[k].x=sqrt(pow((points[i].x-points[j].x),2)+pow((points[i].y-points[j].y),2)+pow((points[i].z-points[j].z),2));
ranges[k].a[0]=points[i].x;ranges[k].a[1]=points[i].y;ranges[k].a[2]=points[i].z;
ranges[k].b[0]=points[j].x;ranges[k].b[1]=points[j].y;ranges[k].b[2]=points[j].z;
k++;}
struct range temp;
for(int i=0;i<=k;i++)
for(int j=0;j<=k-i;j++)
if(ranges[j].x<ranges[j+1].x){
temp=ranges[j];
ranges[j]=ranges[j+1];
ranges[j+1]=temp;
}
for(int i=0;i<k;i++)
cout<<fixed<<setprecision(0)<<'('<<ranges[i].a[0]<<','<<ranges[i].a[1]<<','<<ranges[i].a[2]<<')'<<'-'<<'('<<ranges[i].b[0]<<','<<ranges[i].b[1]<<','<<ranges[i].b[2]<<')'<<'='<<fixed<<setprecision(2)<<ranges[i].x<<endl;




}
