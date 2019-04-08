int main(){
	int n,i,j,q=-1,p=-1;
	double sh[100],fe[120],me[120],t,min1,min2;
	char a[100][10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %lf",a[i],&sh[i]);
	}
	for(i=0;i<n;i++){
		if(strcmp(a[i],"male")==0){
			p++;
			me[p]=sh[i];
		
		}
		else if(strcmp(a[i],"female")==0){
			q++;
			fe[q]=sh[i];
		}
	}
	for(i=0;i<=p;i++)
		for(j=i+1;j<=p;j++)
			if(me[i]>me[j]){
				t=me[i];
				me[i]=me[j];
				me[j]=t;}
	for(i=0;i<=q;i++)
		for(j=i+1;j<=q;j++)
			if(fe[i]<fe[j]){
				t=fe[i];
				fe[i]=fe[j];
				fe[j]=t;}
	printf("%.2lf",me[0]);
	for(i=1;i<=p;i++)
		printf(" %.2lf",me[i]);
	for(i=0;i<=q;i++)
		printf(" %.2lf",fe[i]);
    return 0;
		
}