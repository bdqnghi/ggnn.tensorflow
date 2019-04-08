int main(){
int a,b,c,d,e,f,sum=0,i;
for(i=0;i<1000;i++){
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(a!=0){
d=d+12;
sum=(d-a)*3600+(e-b)*60+(f-c);
printf("%d\n",sum);
}sum=0;
}
	return 0;
}