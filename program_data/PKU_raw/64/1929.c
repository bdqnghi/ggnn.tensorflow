struct zuhe {
	int a[3];
	int b[3];
	double m;
};
int main()
{    struct zuhe z[50];
     struct zuhe b;
     int l,i,j,n,m,k=0;
	 int s[100][4];
	 scanf("%d",&n);
	 for(i=0;i<n;i++){
		 for(j=0;j<3;j++)
			 scanf("%d",&s[i][j]);
	 }
	 for(i=0;i<n-1;i++){
		 for(j=i+1;j<n;j++){
			 for(l=0;l<3;l++){
			 z[k].a[l]=s[i][l];
			 z[k].b[l]=s[j][l];	
			 }
           z[k].m=pow((s[i][0]-s[j][0])*(s[i][0]-s[j][0])+(s[i][1]-s[j][1])*(s[i][1]-s[j][1])+(s[i][2]-s[j][2])*(s[i][2]-s[j][2]),0.5);
		       k=k+1;
		 }
	 }
	 for(i=1;i<n*(n-1)/2;i++){
		 for(j=0;j<n*(n-1)/2-i;j++){
			 if(z[j].m<z[j+1].m){
				 b=z[j];
				 z[j]=z[j+1];
				 z[j+1]=b;
			 }
		 }
	 }
	 for(i=0;i<n*(n-1)/2;i++)
		 printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",z[i].a[0],z[i].a[1],z[i].a[2],z[i].b[0],z[i].b[1],z[i].b[2],z[i].m);
	
	 return 0;
}