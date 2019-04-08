 struct point
{
int x;
int y;
int z;
};  //?????????
struct point dian[101];
double distance(struct point dian[],int i,int j){
	int x=dian[i].x-dian[j].x;
	int y=dian[i].y-dian[j].y;
	int z=dian[i].z-dian[j].z;
	double dis=(double)(x*x+y*y+z*z);
	return sqrt(dis);
}
 int main()
 {
	 int n,i,j;
	 int t=0,k=0;
	 double a[105];
	 cin>>n;
	 for(i=0;i<n;++i)
		 cin>>dian[i].x>>dian[i].y>>dian[i].z;
	 for(i=0;i<n;++i)
		 for(j=i+1;j<n;++j)
			 { int t=0;
                   while(t<k+1 &&(a[t]-distance(dian,i,j)>0.00001 ||distance(dian,i,j)-a[t]>0.00001)) t++;
                   if(t==k+1){ a[k]=distance(dian,i,j);  
                k++; }
              }
	 int count=k;
	 for(i=0;i<count;i++)
		 for(j=0;j<count-i;j++)
			 if(a[j]<a[j+1]){
				 double temp=a[j];
				 a[j]=a[j+1];
				 a[j+1]=temp;
			 }
	              k=0;
				  while(k<count){
				    for(i=0;i<n;++i){
		            for(j=i+1;j<n;++j){ 
						
						if(abs(a[k]-distance(dian,i,j))<0.0000001)
					printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n\n",dian[i].x,dian[i].y,dian[i].z,dian[j].x,dian[j].y,dian[j].z,distance(dian,i,j));
					}
					}
					k++;
				  }
					 //while(1); 
	 return 0;
 }