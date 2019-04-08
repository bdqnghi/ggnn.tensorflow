int main(){
int a,b,c,m=0,g,k;
    scanf("%d%d%d",&a,&b,&c);
	for(int i=1;i<b;i++){
		if(i==2){
	             if(a%400==0||(a%100!=0&&a%4==0)){
			                                      m+=29;}
                 else{
                      m+=28;}}
	    else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			m+=31;}
		else if(i==4||i==6||i==9||i==11){
			m+=30;}}
     k=a-1;
     m=m+c+k*1+k/4+k/400-k/100;
     g=m%7;
	 switch (g){
	 case 0:{printf("Sun.");break;}
     case 1:{printf("Mon.");break;}
     case 2:{printf("Tue.");break;}
     case 3:{printf("Wen.");break;}
     case 4:{printf("Thu.");break;}
     case 5:{printf("Fri.");break;}
     case 6:{printf("Sat.");break;}}


return 0;
}

