int main(){
int n,a,b,c=0,d=0,i;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d %d",&a,&b);
	if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
c=c+1;
	}else if(a==b){
	c=c+0;
	d=d+0;
	}else{
	d=d+1;
	}
}
if(c>d){
	printf("A");
} 
if(c<d){

printf("B");
}
if(c==d){
	printf("Tie");
}
return 0;
}


