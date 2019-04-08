int main(){
int i,j,a[100],b[100],c[100],n,e;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
}
for(i=0;i<n;i++){
c[i]=0;
}
j=0;
for(i=0;i<n;i++){
if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90) c[j]++;
if(!(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)) j++;
}
for(i=0;i<n-1;i++){
	if(c[i]>c[i+1]){
e=c[i];
c[i]=c[i+1];
c[i+1]=e;
	}
	}
printf("%d",c[n-1]);
return 0;
}