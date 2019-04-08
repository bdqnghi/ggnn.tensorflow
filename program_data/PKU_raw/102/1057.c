int main(){
	double a[50],sg,e=0;
	int n=0,z=0,i=0,j=0,k=0,y=0;
	char xb[50];
	scanf("%d",&n);
	y=n;
	for(i=0;i<n;i++){
		scanf("%s %lf",xb,&sg);
		if(xb[0]=='m'){
			a[z]=sg;
			z++;}
		else{
			a[y]=sg;
			y--;}
	}
		for(j=0;j<z-1;j++){
			for(k=j;k<z;k++){
				if(a[j]>a[k])
			{
				e=a[j];
				a[j]=a[k];
				a[k]=e;
				}
			}
		printf("%.2lf ",a[j]);
	}
	printf("%.2lf ",a[z-1]);

			for(j=n;j>y+1;j--){
				for(k=j;k>y;k--){
					if(a[j]>a[k])
			{
				e=a[j];
				a[j]=a[k];
				a[k]=e;}
			}}
			for(i=y+1;i<n;i++)
		printf("%.2lf ",a[i]);
       	printf("%.2lf",a[n]);

				return 0;
			}
