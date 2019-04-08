int num(int k,int i,int *p,int height){
	if(i==k)return 0;
	if(*(p+i)>height)return(num(k,i+1,p,height));
	if(*(p+i)==height)return(num(k,i+1,p,height)+1);
	int a=num(k,i+1,p,height);
	int b=num(k,i+1,p,*(p+i))+1;
	return a>b?a:b;
}
int main(){
	int k,h[25],i;
	scanf("%d",&k);
	for(i=0;i<k;i++)scanf("%d",&h[i]);
	printf("%d",num(k,0,h,1000000000));
	return 0;
}