int main (){
int n,a[500],b[500],t=0,q=0,e,i,k;
scanf("%d",&n);
for (i=0;i<n;i++){
	scanf("%d",&a[i]);
}
for (i=0;i<n;i++){
	if (a[i]%2!=0){
	b[t]=a[i];
		t++;
	}
}

for (k=1;k<=t;k++){
	q=0;
	for (i=0;i<=t-k;i++){
		if (b[i]>b[q]){
			q=i;
		}
	}
	e=b[q];
	b[q]=b[t-k];
	b[t-k]=e;
}
printf("%d",b[0]);
for (k=1;k<=t-1;k++){
	printf(",%d",b[k]);
}
	

	return 0;
}

