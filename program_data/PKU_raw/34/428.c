int main(){
int n,i,a[1000000],t=0;
scanf("%d",&n);
a[0]=n;
if(n==1)   {printf("End");}
else{
for(i=1;i++;){
	if(a[t]%2==0)  {a[t+1]=a[t]/2;   printf("%d/2=%d\n",a[t],a[t+1]);   t++;}
     if(a[t]==1)     {printf("End");break;}
	if(a[t]%2!=0)   {a[t+1]=1+a[t]*3;  printf("%d*3+1=%d\n",a[t],a[t+1]);  t++;}
	if(a[t]==1)     {printf("End");break;}
}
}



	return 0;
}
