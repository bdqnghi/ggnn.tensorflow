int main(){
	int n,i,j,k;
	int a,b,c,d,e,f;
while(1){
scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);
scanf("%d",&d);scanf("%d",&e);scanf("%d",&f);
	if(a==0)break;
	d=12+d;
	if(f<c){
		f=f+60;
		e--;
	}
	if(e<b){
		e+=60;
		d--;
	}
	k=(d-a)*3600+(e-b)*60+(f-c);
	printf("%d\n",k);
}






	return 0;
}