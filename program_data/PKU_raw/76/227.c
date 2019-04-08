int main(){
    int s[100000][2],n,i,a=0,b=0,d;
	double c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d%d",&s[i][0],&s[i][1]);
	}

	for(i=0;i<n;i++){
		if(s[i][0]<s[a][0]){
		a=i;
		}
		if(s[i][1]>s[b][1]){
		b=i;
		}
	}

    d=s[b][1];

	for(c=1.0*s[a][0];c<=d;c+=0.5){
		for(i=0;i<n;i++){
			if(c>=s[i][0]&&c<=s[i][1]){
			    break;
			}
			if(i==n-1){
			printf("no");
			return 0;
			}
		}
	}

	printf("%d %d",s[a][0],s[b][1]);
    
return 0;
}