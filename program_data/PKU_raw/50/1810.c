int main(){
	int w,a,i,b;
	scanf("%d",&w);
	int s[12]={13,44,72,103,133,164,194,225,256,286,317,347};
	for(i=1;i<=12;i++){
		if(i==1){
		    a=13%7-1;
			if(w+a<=7){b=w+a;}
			else{b=w+a-7;}
			if(b==5){printf("%d\n",i);}
		}else if(i==2){
		    a=44%7-1;
			if(w+a<=7){b=w+a;}
			else{b=w+a-7;}
			if(b==5){printf("%d\n",i);}
		}else if(i==3){
		    a=72%7-1;
			if(w+a<=7){b=w+a;}
			else{b=w+a-7;}
			if(b==5){printf("%d\n",i);}
		}else if(i==4){
		    a=103%7-1;
			if(w+a<=7){b=w+a;}
			else{b=w+a-7;}
			if(b==5){printf("%d\n",i);}
		}else if(i==5){
		    a=133%7-1;
			if(w+a<=7){b=w+a;}
			else{b=w+a-7;}
			if(b==5){printf("%d\n",i);}
		}else if(i==6){
		    a=164%7-1;
			if(w+a<=7){b=w+a;}
			else{b=w+a-7;}
			if(b==5){printf("%d\n",i);}
		}else if(i==7){
		    a=194%7-1;
			if(w+a<=7){b=w+a;}
			else{b=w+a-7;}
			if(b==5){printf("%d\n",i);}
		}else if(i==8){
		    a=225%7-1;
			if(w+a<=7){b=w+a;}
			else{b=w+a-7;}
			if(b==5){printf("%d\n",i);}
		}else if(i==9){
		    a=256%7-1;
			if(w+a<=7){b=w+a;}
			else{b=w+a-7;}
			if(b==5){printf("%d\n",i);}
		}else if(i==10){
		    a=286%7-1;
			if(w+a<=7){b=w+a;}
			else{b=w+a-7;}
			if(b==5){printf("%d\n",i);}
		}else if(i==11){
		    a=317%7-1;
			if(w+a<=7){b=w+a;}
			else{b=w+a-7;}
			if(b==5){printf("%d\n",i);}
		}else if(i==12){
		    a=347%7-1;
			if(w+a<=7){b=w+a;}
			else{b=w+a-7;}
			if(b==5){printf("%d\n",i);}}
	}
	return 0;
}

