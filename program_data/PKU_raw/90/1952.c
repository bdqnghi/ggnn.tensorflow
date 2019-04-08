int f (int x,int y){
	int result;
	if(y==1||x==1||x==0)
		return 1;
	else if(x-y<0)
		return f(x,x);
	else 
	{	result=f(x,y-1)+f(x-y,y);
	return result;}
}
int main(){
 int M,N,n,r,i;
 scanf("%d",&n);
 for(i=0;i<n;i++){
	 scanf("%d %d",&M,&N);
	 r=f(M,N);
	 printf("%d\n",r);
 }
 return 0;
}

 
 