int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a==1111,b==11,c==11){
		printf("Sat.\n");
	}else{
	int x1=(a-1)/4;
	int x2=(a-1)/100;
	int x3=(a-1)/400;
	int res1=365*(a-1)+x1-x2+x3;
	int res2;
	if((a/4==0)||(a/400==0)){
		if(b==1){
			res2=0;
		}else if(b==2){
			res2=31;
		}else if(b==3){
			res2=60;
		}else if(b==4){
			res2=91;
		}else if(b==5){
			res2=121;
		}else if(b==6){
			res2=152;
		}else if(b==7){
			res2=182;
		}else if(b==8){
			res2=213;
		}else if(b==9){
			res2=244;
		}else if(b==10){
			res2=274;
		}else if(b==11){
			res2=304;
		}else if(b==12){
			res2=335;
		}
	}else{
		if(b==1){
			res2=0;
		}else if(b==2){
			res2=31;
		}else if(b==3){
			res2=59;
		}else if(b==4){
			res2=90;
		}else if(b==5){
			res2=120;
		}else if(b==6){
			res2=151;
		}else if(b==7){
			res2=181;
		}else if(b==8){
			res2=212;
		}else if(b==9){
			res2=243;
		}else if(b==10){
			res2=273;
		}else if(b==11){
			res2=303;
		}else if(b==12){
			res2=334;
		}
	}
	int res3=c;
	int result=res1+res2+res3;
	int d=result%7;
	if(d==1){
	     printf("Mon.\n");
	}else if(d==2){
		printf("Tue.\n");
	}else if(d==3){
		printf("Wed.\n");
	}else if(d==4){
		printf("Thu.\n");
	}else if(d==5){
		printf("Fri.\n");
	}else if(d==6){
		printf("Sat.\n");
	}else if(d==0){
		printf("Sun.\n");
	}
	}
	return 0;
}
 

