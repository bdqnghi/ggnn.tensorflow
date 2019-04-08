int main(){
  int w,i,a;
  scanf("%d",&w);
  for(i=1;i<13;i++){
    a=w+5;
    if(a>7){a=a-7;}
    if(a==5){printf("%d\n",i);}
    if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
      w=w+3;if(w>7){w=w-7;}
    }
    if(i==4||i==6||i==9||i==11){
      w=w+2;if(w>7){w=w-7;}
    }
    if(i==2){w=w;}
  }
return 0;
}