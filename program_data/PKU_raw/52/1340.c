void main(){
int i,n,m;
	scanf("%d %d",&n,&m);
int *p=(int*)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
scanf("%d",p+i);
for(i=n-m;i<2*n-m;i++){
	printf("%d",*(p+i%n));
if(i==2*n-m-1)
break;
else printf(" ");
}
free(p);
}