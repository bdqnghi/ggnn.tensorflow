int main(){
	char a[100][11],c[100][11];
	int i,j,n,b[100],m,e=-1,f=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if(b[i]>=60){
			m=0;
			for(j=0;j<n;j++){
				if(b[i]<b[j]||(b[i]==b[j]&&i>j)){
					m++;
			}}
			if(e<m)
				e=m;
			strcpy(c[m],a[i]);
	}}
	e=e+1;
	for(i=0;i<n;i++){
		if(b[i]<60){
			strcpy(c[i-f+e],a[i]);
		}else{
			f++;
	}}
	for(i=0;i<n;i++){
		printf("%s\n",c[i]);
	}
	return 0;
}


