int main(){
int i,n,m,a[1000],b[1000],d[1000],c=0;
scanf("%d%d",&n,&m);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
	b[i]=a[i];
}
for(int t=0;t<n;t++){
	for(i=0;i<n;i++){
	if(t!=i)
	d[t]=a[t]+b[i];
	if(d[t]==m)
	c=c+1; 
}
}
if(c==0)
printf("no");
else 
printf("yes"); 
return 0;
}