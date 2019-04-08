int main(){
	int n,i,j,x=0,y=0;
	double a[100],b[100],c,s;
	char t[7];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%lf",t,&c);
		if(t[0]=='m'){
			a[x]=c;
			x+=1;
		}
		if(t[0]=='f'){
			b[y]=c;
			y+=1;
		}
	}
	for(i=0;i<x;i++){
		for(j=0;j<x-1;j++){
			if(a[j]>a[j+1]){
				s=a[j];
				a[j]=a[j+1];
				a[j+1]=s;
			}
		}
	}
	for(i=0;i<y;i++){
		for(j=0;j<y-1;j++){
			if(b[j]<b[j+1]){
				s=b[j];
				b[j]=b[j+1];
				b[j+1]=s;
			}
		}
	}
	printf("%.2lf",a[0]);
	for(i=1;i<x;i++)
		printf(" %.2lf",a[i]);
	for(i=0;i<y;i++)
		printf(" %.2lf",b[i]);
	return 0;
}
