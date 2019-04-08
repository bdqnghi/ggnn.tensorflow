void main(){
	int i,k,m,s=0,t[51][2];
	memset(t,0,sizeof(t));
	char a[101];
	gets(a);
	int n=strlen(a);
	k=n;
	for(;;){
	if(k==1||k==0)break;
	else{
		for(i=0;i<n;i++){
			if(a[i]){
			if(a[i]==a[0])m=i;
			else if(a[m]!=a[0])continue;
			else if(a[i]!=a[m]){
				t[s][0]=m;t[s][1]=i;
				s++;
				a[i]=0;a[m]=0;
				k-=2;
				m++;
			}
			}
		}
	}
	}
	for(i=0;i<50;i++){
		if(t[i][1]==0)break;
	}
	for(k=0;k<i-1;k++){
		for(m=k+1;m<i;m++){
			if(t[k][1]>t[m][1]){
				t[50][0]=t[m][0];t[50][1]=t[m][1];
				t[m][0]=t[k][0];t[m][1]=t[k][1];
				t[k][0]=t[50][0];t[k][1]=t[50][1];
			}
		}
	}
	for(k=0;k<i;k++)
		printf("%d %d\n",t[k][0],t[k][1]);
}
