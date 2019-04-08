void main()
{
	int l,i,t=0,n=0,j,x,y;
	int B[50]={0},G[50]={0};
	char a[100];
	char b,g;
	gets(a);
	l=strlen(a);
	b=a[0];
	for(i=1;i<l;i++){
		if(a[i]!=b){
			g=a[i];
			break;
		}
	}
	for(t=0;t<=l-2;t=t+2){
	for(i=0;i<l-1-t;i++){
		if(a[i]==b&&a[i+t+1]==g){
			B[n]=i;
			G[n]=i+t+1;
			a[i]='q';
			a[i+t+1]='q';
			++n;
		}
	}
	}
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(G[j]>G[j+1]){
				x=G[j];
				G[j]=G[j+1];
				G[j+1]=x;
				y=B[j];
				B[j]=B[j+1];
				B[j+1]=y;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d %d\n",B[i],G[i]);
	}
}

