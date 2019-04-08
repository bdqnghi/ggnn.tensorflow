
int main(){
int a,b,c,d,e,f,t=0,i,j;
for(j=0;j<1000000;j++){
  for(i=0;i<1000000;i++){
	scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
		return 0;
	}
t=((d+12)*3600)+(e*60)+f-(a*3600)-(b*60)-c;
printf("%d\n",t);
a=0;b=0;c=0;d=0;e=0;f=0;t=0;
  }

}

return 0;
}