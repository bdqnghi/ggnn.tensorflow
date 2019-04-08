int main(){
int m,i,n,k;
scanf("%d",&m);
double res,x,y;
x=1.0*2/1;
y=x+1.0*3/2;
int sz1[1000],sz2[1000];
sz1[0]=2;
sz1[1]=3;
sz2[0]=1;
sz2[1]=2;
for(i=0;i<m;i++){
scanf("%d",&n);
if(n==1){
printf("%.3lf\n",x);
}else if(n==2){printf("%.3lf\n",y);
}else{
	res=3.500;
	for(k=2;k<n;k++){
sz1[k]=sz1[k-1]+sz1[k-2];
sz2[k]=sz2[k-1]+sz2[k-2];
	res+=(1.0*sz1[k])/sz2[k];
}
printf("%.3lf\n",res);
}
}
return 0;
}