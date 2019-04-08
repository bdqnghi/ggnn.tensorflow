
int main()
{
 int n,i,t,max,a[100],b[100],c[100];
 t=0;
 scanf("%d\n",&n);
 for(i=0;i<=n-1;i++){
 scanf("%d %d\n", &(a[i]),&(b[i]));
 if(a[i]<=140&&a[i]>=90&&b[i]>=60&&b[i]<=90){
 t=t+1;
 c[i]=t;
 }
 else{
 c[i]=t=0;
 
 }
 }
 max=c[0];
for (i=0;i<=n-1;i++){
	if (max<c[i]){
		max=c[i];
	}
}

 printf("%d",max);
 return 0;
}
