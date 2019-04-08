int main(){
int a,b,c,d,e,f,sum;
int i;
for(i=0;i<100;i++){
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){break;}
d+=12;
sum=0;
sum+=(d-a)*60*60;
if(e>=b){
sum+=(e-b)*60;}
else{sum-=(b-e)*60;}
if(f>=c){sum+=(f-c);}
else{sum-=(c-f);}
printf("%d\n",sum);}
return 0;
}