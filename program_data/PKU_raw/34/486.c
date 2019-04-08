int main(){
int n,i,a[14444];
scanf("%d",&n);
a[0]=n;
i=0;
while(n>-1){
n=a[i]%2;
if(n==0){
a[i+1]=a[i]/2;
printf("%d/2=%d\n",a[i],a[i+1]);
}else if(n==1&&a[i]!=1){
	a[i+1]=3*a[i]+1;
	printf("%d*3+1=%d\n",a[i],a[i+1]);
}else if(a[i]==1){printf("End\n");
break;}





i++;
}






return 0;
}