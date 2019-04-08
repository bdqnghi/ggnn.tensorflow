int main(){
	int n;
	scanf("%d",&n);
	int s[100][2],a[100]={0};
	int i,j,e;
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&s[i][j]);
		}
	}
	int c=0;
	for(i=0;i<n;i++){
		if(s[i][0]<=140&&s[i][0]>=90&&s[i][1]<=90&&s[i][1]>=60){
			c++;
		}else{
			a[i]=c;
			c=0;
		}
	}
	a[n-1]=c;
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(a[j]<a[j+1]){
				e=a[j+1];
				a[j+1]=a[j];
				a[j]=e;
			}
		}
	}
	printf("%d",a[0]);
	return 0;
}