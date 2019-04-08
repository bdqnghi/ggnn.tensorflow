int yu7wuguan(int number);
int main()
{
int num,result=0;
scanf("%d",&num);
for(int i=1;i<=num;i++){
if(yu7wuguan(i)){
result+=i*i;}
}
printf("%d",result);
return 0;
}
int yu7wuguan(int number){
if(number%7==0){
return 0;
}
if(number%10==7||number/10==7){return 0;}
return 1;
}

