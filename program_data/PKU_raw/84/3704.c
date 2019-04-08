int main(){
int a,b,c,x,y,i,n;
scanf("%d",&n);
for(i=1;i<=2;i++){
	if(i=1){
		scanf("%d",&a);
	}
	if(i=2){scanf("%d",&b);
	}
	if(a>b){x=a;y=b;}
	if(a<b){x=b;y=a;}
}
for(i=3;i<=n;i++){
scanf("%d",&c);
if(c>x){y=x;x=c;}
if(x>c&&c>y){y=c;}
}
printf("%d\n""%d\n",x,y);
return 0;
}