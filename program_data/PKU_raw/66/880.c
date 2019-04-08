int main(){
	int a,b,c,m,n;
	scanf("%d %d %d",&a,&b,&c);
	m=a-1+(a-1)/400*97+(a-1)%400/4-(a-1)%400/100;
	if(a%4==0&&a%100!=0||a%400==0){
		if(b==1){	n=c;	}
		if(b==2){   n=3+c;  }
		if(b==3){	n=4+c;	}
		if(b==4){	n=c;	}
		if(b==5){	n=2+c;	}
		if(b==6){	n=5+c;	}
		if(b==7){	n=c;	}
		if(b==8){	n=3+c;	}
		if(b==9){	n=6+c;	}
		if(b==10){	n=1+c;	}
		if(b==11){	n=4+c;	}
		if(b==12){	n=6+c;	}
	}else{
		if(b==1){	n=c;	}
		if(b==2){   n=3+c;  }
		if(b==3){	n=3+c;	}
		if(b==4){	n=6+c;	}
		if(b==5){	n=1+c;	}
		if(b==6){	n=4+c;	}
		if(b==7){	n=6+c;	}
		if(b==8){	n=2+c;	}
		if(b==9){	n=5+c;	}
		if(b==10){	n=c;	}
		if(b==11){	n=3+c;	}
		if(b==12){	n=5+c;	}
	}
	if((m+n)%7==1){ 	printf("Mon.");     }
	if((m+n)%7==2){ 	printf("Tue.");     }
	if((m+n)%7==3){ 	printf("Wed.");     }
	if((m+n)%7==4){ 	printf("Thu.");     }
	if((m+n)%7==5){ 	printf("Fri.");     }
	if((m+n)%7==6){ 	printf("Sat.");     }
	if((m+n)%7==0){ 	printf("Sun.");     }
	return 0;
}
