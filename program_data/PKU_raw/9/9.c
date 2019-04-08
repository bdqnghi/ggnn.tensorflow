int main(){
	int i,j,n,h1[100],h2[100],c1=0,c2=0,t;
	char d1[100][10],d2[100][10],d[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",d);
		scanf("%d",&t);
		if(t>=60){
			h1[c1]=t;
			strcpy(d1[c1],d);
			c1++;
		}
		else{
			h2[c2]=t;
			strcpy(d2[c2],d);
			c2++;
		}
	}
	for(i=1;i<=c1;i++){
		for(j=0;j<c1-i;j++){
			if(h1[j]<h1[j+1]){
				t=h1[j];
				h1[j]=h1[j+1];
				h1[j+1]=t;
				strcpy(d,d1[j]);
				strcpy(d1[j],d1[j+1]);
				strcpy(d1[j+1],d);
			}
		}
	}
	for(i=0;i<c1;i++){
		puts(d1[i]);
	}
	for(i=0;i<c2;i++){
		puts(d2[i]);
	}
	return 0;
}
