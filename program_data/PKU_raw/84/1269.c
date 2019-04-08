int main()
{
int n,a,b,c,i,m;
scanf("%d\n%d\n%d\n",&n,&a,&b);
i=2;
if(a<b){
	m=a;
	a=b;
	b=m;
}
while(i<n){
	scanf("%d",&c);
    i+=1;
	if(c>=a){
		b=a;
        a=c;
	}else if(c>=b){
		b=c;
	}
}
printf("%d\n%d\n",a,b);
	return 0;
}