int main(){
int a[50000],b[50000],c[50000],d[50000],n;
scanf("%d",&n);
int i;
for(i=0;i<n;i++){
scanf("%d %d",&a[i],&b[i]);
c[i]=a[i];
}
int k,m,l;
for(k=0;k<n-1;k++){
	for(m=k+1;m<n;m++){
		if(c[k]<=c[m]){c[k]=c[k];}
		else{l=c[m];c[m]=c[k];c[k]=l;}
	}
}
int q,w;
for(q=0;q<n;q++){
	for(w=0;w<n;w++){
		if(a[w]==c[q]){d[q]=b[w];break;}
		else continue;
	}
}
int r;
for(r=1;r<n;r++){
if(b[0]<b[r]) b[0]=b[r];
}
int t,y,u=0;
for(t=1;t<n;t++){
	for(y=0;y<=t;y++){
	if(c[t]<=d[y]) u+=1;
	else u=u;}
	if(u>1) u=0;
	else {printf("no");return 0;}
}
printf("%d %d",c[0],b[0]);
return 0;
}