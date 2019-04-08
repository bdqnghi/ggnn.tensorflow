int main(){
int n,i,j=0,k=0,p,q;
char str[10];
double a[40],b[40],c[40],e;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%s%lf",str,&a[i]);
	if(str[0]=='m'){
		b[j]=a[i];
		j++;
	}else{
		c[k]=a[i];
		k++;
	}
}
p=j;q=k;
for(i=0;i<p-1;i++){
	for(j=0;j<p-1;j++){
		if(b[j]>b[j+1]){
			e=b[j];
			b[j]=b[j+1];
			b[j+1]=e;
		}
	}
}
for(i=0;i<q-1;i++){
	for(k=0;k<q-1;k++){
		if(c[k]<c[k+1]){
			e=c[k];
			c[k]=c[k+1];
			c[k+1]=e;
		}
	}
}
for(j=0;j<p;j++){
	printf("%.2lf ",b[j]);
}
for(k=0;k<q-1;k++){
	printf("%.2lf ",c[k]);
}
printf("%.2lf",c[q-1]);
return 0;
}