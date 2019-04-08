int main(){
int a,b,c,d,e,f,s;
while(1){
scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
if((a==0)&&(b==0)&&(c==0)&&(d==0)&&(e==0)&&(f==0)){
break;
}
s=f+60-c;
s=s+60*(e+59-b);
s=s+3600*(d+11-a);
printf("%d\n",s);
}
return 0;
}