int main(){
	int n,i,a[100],b[100],c[100],j=0,d;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	c[i]=0;
	scanf("%d%d",&a[i],&b[i]);
	}
	i=0;
	for(i=i;i<n;i++){
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
			c[j]++;
		else
			j++;
	}
	for(i=0;i<n-1;i++){
		if(c[i]>c[i+1]){
		d=c[i];c[i]=c[i+1];c[i+1]=d;
		}
	}
	printf("%d",c[n-1]);
		return 0;
	}
