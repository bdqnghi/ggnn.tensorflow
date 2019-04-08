int main(){
int n,i,b,c=0,d;
float x,e=0;
float a[10];
scanf("%d",&n);
for(i=0;i<=n-1;i++){
	scanf("%d",&b);
	a[i]=b;
    c=c+b;
}
for(i=0;i<=n-1;i++){
	scanf("%d",&d);
	if(d<=100&&d>=90){
		e=e+4.0*a[i];
	}
    if(d<=89&&d>=85){
		e=e+3.7*a[i];
	}
    if(d<=84&&d>=82){
		e=e+3.3*a[i];
	}
    if(d<=81&&d>=78){
		e=e+3.0*a[i];
	}
    if(d<=77&&d>=75){
		e=e+2.7*a[i];
	}
    if(d<=74&&d>=72){
		e=e+2.3*a[i];
	}
    if(d<=71&&d>=68){
		e=e+2.0*a[i];
	}
    if(d<=67&&d>=64){
		e=e+1.5*a[i];
	}
    if(d<=63&&d>=60){
		e=e+1.0*a[i];
	}
        }
x=e/c;
printf("%.2f",x);
return 0;
}