int a[100],b[100],c[100];
int main(){
	int n,i,lh=0,k,e=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		c[i]=0;
	}
	for(i=0;i<n;i++){
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
			c[i]=1;
		}
	}
	for(i=0;i<n;i++){
		for(k=i;;k++){
			if(c[k]==1)
				lh++;
			else if(c[k]!=1)
				break;
		}
		//printf("%d\n",lh);
		if(e<lh){
			e=lh;
			lh=0;
		}
		else lh=0;
	}
	printf("%d",e);
	return 0;
}
