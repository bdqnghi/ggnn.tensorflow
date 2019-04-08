int main(){
int a,b,c,d,e,f,s,i;
for(i=0;i<100000;i++){
s=0;
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
if(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
s=s+f+e*60+60-c+60*(60-b-1);
{s=s+(d*60*60)+((11-a)*60*60);}
printf("%d\n",s);
}
else{break;}}
return 0;
}