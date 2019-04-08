
int main (){
	int n,x,i,a=0,b=0,c=0,d=0;
    double e,f,g,h;
	scanf("%d",&n);
    
	for(i=1;i<=n;i++)
	{scanf("%d",&x);
	if(x<=18){a=a+1;}
	else if (x<=35){b=b+1;}
	else if (x<=60){c=c+1;}
	else{d=d+1;}
	}
    e=1.0*a/n*100;
	f=1.0*b/n*100;
	g=1.0*c/n*100;
	h=1.0*d/n*100;
	   
		   printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",e,f,g,h);
	

	return 0;
}
