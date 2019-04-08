int main()
{
int i,n,x,y,a,c,d,e,b;
scanf("%d",&n);
scanf("%d %d",&a,&b);
c=100*b/a;
for(i=1;i<n;i++){
    scanf("%d %d",&x,&y);
	d=100*y/x;
	e=d-c;
	if(e>=5)
		printf("better\n");
	else if(e<=-5){
		printf("worse\n");
	}
	else{
		printf("same\n");
	}
}

return 0;
}