int main()
{
int n,sz[5],i,a=0,b,c[5],j;
scanf("%d",&n);
b=n;
for(i=0;b>0;i++){
	b=b/10;
}
a=i;
for(i=0;i<a;i++){
	sz[i]=n;
}
for(i=0;i<a;i++){
	for(j=0;j<a-i-1;j++){
		sz[i]=sz[i]/10;
	}
}
c[0]=sz[0];
for(i=1;i<a;i++){
	c[i]=sz[i]-(sz[i-1]*10);
}
for(i=a-1;i>=0;i--){printf("%d",c[i]);}
return 0;
}