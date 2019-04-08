
int main(){
    int w,m,e=0,k;


    scanf("%d",&w);
    for(m=1;m<=12;m++){
        k=(e+13)%7;
        if((k+w-1==5)||(k+w-8==5)){
			printf("%d\n",m);
		}
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
			e=e+31;
		}else if(m==2){
			e=e+28;
		}else{
			e=e+30;
		}
    }
	return 0;
}