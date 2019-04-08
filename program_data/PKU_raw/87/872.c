int main(){
    int a=1,b=1,c=1,d=1,e=1,f=1,g,i,j,k,s;
    for(i=0;i<100;i++){
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
        break;
    }
     g=3600*(d+12)+60*e+f;
     k=3600*a+60*b+c;
     s=g-k;
     printf("%d\n",s);}
   
   return 0;
}


