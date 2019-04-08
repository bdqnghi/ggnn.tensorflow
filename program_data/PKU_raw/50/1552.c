int f(int x);
int main(){
	int w,i;
    scanf("%d",&w);
    for(i=1;i<=12;i++){

        if(f(i)%7+w-1==5||f(i)%7+w-1==12){
		printf("%d\n",i);
		}
	}
	return 0;
}
int f(int x){
	int result;
	if(x==1){
		result=13;
	}
    if(x==2){
	result=44;
	}
	if(x==3){
	result=72;
	}
	if(x==4){
	result=103;
	}
	if(x==5){
		result=133;
	}
	if(x==6){
		result=164;
	}
	if(x==7){
		result=194;
	}
	if(x==8){
		result=225;
	}
	if(x==9){
		result=256;
	}
	if(x==10){
		result=286;
	}

	if(x==11){
		result=317;
	}
	if(x==12){
		result=347;
	}
	return result ;
}




