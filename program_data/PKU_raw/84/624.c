int main(){
	int n,a,b,c,m,i=1;
	scanf("%d",&n);
	while(i<=n){
		if(i==1){scanf("%d",&a);}
		if(i==2){
		scanf("%d",&b);
		  if(b>a){m=a;a=b;b=m;}
		}
		if (i!=1&&i!=2){
		scanf("%d",&c);
		  if(c>a){b=a;a=c;}
		  if(c<a&&c>b){b=c;}
		}
	i++;
	
	
	}
printf("%d\n%d\n",a,b);

return 0;
}