int main(){

int n,a,b,x=0,y=0;
scanf("%d\n",&n);
for(int i=0;i<n;i++){
	scanf("%d",&a);
	scanf("%d",&b);
	if(a==0&&b==0){
		x=x;
	}if(a==0&&b==1){
		x++;
	}if(a==0&&b==2){
		y++;
	}if(a==1&&b==0){
		y++;
	}if(a==1&&b==1){
		x=x;
	}if(a==1&&b==2){
		x++;
	}if(a==2&&b==0){
		x++;
	}if(a==2&&b==1){
		y++;
	}if(a==2&&b==2){
		x=x;
	}
}
if(x>y){
	printf("A");
}
if(x<y){
	printf("B");
}
if(x==y){
	printf("Tie");
}

return 0;
}
