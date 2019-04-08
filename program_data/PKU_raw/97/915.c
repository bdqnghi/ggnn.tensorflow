int main ()
{
	int n,a=0,b=0,c=0,d=0,e=0,f=0,x,y;
	scanf("%d",&n);

	x=n/10;
	y=x/10;
	
	a=y;
	if(x-10*y==0){b=0;c=0;d=0;}
	if(x-10*y==1){b=0;c=0;d=1;}
	if(x-10*y==2){b=0;c=1;d=0;}
	if(x-10*y==3){b=0;c=1;d=1;}
	if(x-10*y==4){b=0;c=2;d=0;}
	if(x-10*y==5){b=1;c=0;d=0;}
	if(x-10*y==6){b=1;c=0;d=1;}
	if(x-10*y==7){b=1;c=1;d=0;}
	if(x-10*y==8){b=1;c=1;d=1;}
	if(x-10*y==9){b=1;c=2;d=0;}
	if(n-x*10==0){e=0;f=0;}
	if(n-x*10==1){e=0;f=1;}
	if(n-x*10==2){e=0;f=2;}
	if(n-x*10==3){e=0;f=3;}
	if(n-x*10==4){e=0;f=4;}
	if(n-x*10==5){e=1;f=0;}
	if(n-x*10==6){e=1;f=1;}
	if(n-x*10==7){e=1;f=2;}
	if(n-x*10==8){e=1;f=3;}
	if(n-x*10==9){e=1;f=4;}
					
    

	printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);
		
		return 0;

}