float suan(int a[], int b[],int n,float d) 
{ 
	double c[10];
	int i=0;
	for(i=0;i<n;i++){
		if(b[i]<60)
			c[i]=0;
		else if(b[i]<64)
			c[i]=1.0*a[i];
		else if(b[i]<68)
			c[i]=1.5*a[i];
		else if(b[i]<72)
			c[i]=2.0*a[i];
		else if(b[i]<75)
			c[i]=2.3*a[i];
		else if(b[i]<78)
			c[i]=2.7*a[i];
		else if(b[i]<82)
			c[i]=3.0*a[i];
		else if(b[i]<85)
			c[i]=3,3*a[i];
		else if(b[i]<90)
			c[i]=3.7*a[i];
		else
			c[i]=4.0*a[i];
	}
	float e=0;
	for(i=0;i<n;i++){
		e=e+a[i];
	}
	for(i=0;i<n;i++){
		d=d+c[i];
	}
	d=d/e;
	return d;
}
int main(){
	int n,a[10],b[10];
	int j;
	scanf("%d",&n);
	for(j=0;j<n;j++){
		scanf("%d",&a[j]);
	}
	for(j=0;j<n;j++){
		scanf("%d",&b[j]);
	}
	float GPA=0;
	GPA=suan(a,b,n,GPA);
	printf("%.2f",GPA);
	return 0;
}