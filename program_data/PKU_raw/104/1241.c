int main(){
int x,y,m;
scanf("%d %d",&x,&y);
m=y;
while(x>=1){
	while(y>=1){
	   if(y==x){
		   printf("%d",y); return 0;
	   }
	   y=y/2;
	   //printf("%d %d\n",x,y);
	}
	x=x/2;
	y=m;
}
return 0;
}