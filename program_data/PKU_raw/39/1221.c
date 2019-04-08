int main(){
	int n,i,j=0,k=0,r,o=0;
	scanf("%d",&n);
	char renming[200][20],ganbu[200],xibu[200];
	int a[200],b[200],c[200],total[200];
	for(i=0;i<n;i++){
		scanf("%s %d %d %c %c %d",&renming[i],&a[i],&b[i],&ganbu[i],&xibu[i],&c[i]);}
	for(i=0;i<n;i++){
		total[i]=0;
		if(a[i]>80&&c[i]>0){total[i]+=8000;}
		if(a[i]>85&&b[i]>80){total[i]+=4000;}
		if(a[i]>90){total[i]+=2000;}
		if(a[i]>85&&xibu[i]=='Y'){total[i]+=1000;}
		if(b[i]>80&&ganbu[i]=='Y'){total[i]+=850;}
		if(total[i]>j){j=total[i];r=i;}
		o+=total[i];
	}printf("%s\n%d\n%d",renming[r],j,o);
	return 0;
}
