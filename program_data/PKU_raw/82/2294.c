int main(){
int n,i,j,t=0,e=0,k,a,b;
int an[50]={0};
scanf("%d",&n);
for(j=0;j<n;j++){
scanf("%d %d",&a,&b);
if(((a>=90)&&(a<=140))&&((b>=60)&&(b<=90))){
an[t]=an[t]+1;
}else{
t=t+1;
}
}
for(k=1;k<=t+1;k++){
	for(i=0;i<t+1-k;i++){
		if(an[i]>an[i+1]){
				e=an[i+1];
				an[i+1] =an[i];
				an[i] = e;
		}
}
}
printf("%d\n",an[t]);
return 0;
}