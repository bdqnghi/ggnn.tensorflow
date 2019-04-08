int main(){
    int max1,max2,num,i=1;
    while(i<=10){
    scanf("%d",&num);
    if(i==1){
      max1=num;
    }else if(i==2){
    if(num>max1){
       max2=max1;
       max1=num;
     }else{
      max2=num;
     }
     }else{
     if(num>max1){
     max2=max1;
     max1=num;
}else if(num>max2&&num<max1){
max2=num;
}
}
i++;
}
printf("%d\n%d\n",max1,max2);
return 0;
}
