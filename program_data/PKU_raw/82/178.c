int main(){
	int n,a,b,i,s[100]={0},k=0,j,t;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90){
			s[k]++;
		}
		else k++;
	}
	for(i=1;i<k+1;i++){
		for(j=0;j<k+1-i;j++){
			if(s[j]>s[j+1]){
				t=s[j+1];
				s[j+1]=s[j];
				s[j]=t;
			}
		}
	}
	printf("%d\n",s[k]);
	return 0;
}

