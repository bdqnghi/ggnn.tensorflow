
int main()
{
	int i,n;
	int x[101];
	scanf("%d",&n);
	double a=0.0,b=0.0,c=0.0,d=0.0;
	double e,f,g,h;

	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++){
		if(x[i]<=18){
			a=a+1.0;
		}
		else if((x[i]>=19)&&(x[i]<=35)){
			b=b+1.0;
		}
		else if((x[i]>=36)&&(x[i]<=60)){
			c=c+1.0;
		}
		else if(x[i]>=61){
			d=d+1.0;
		}
	}

	e=a*100/n;
	f=b*100/n;
	g=c*100/n;
	h=d*100/n;
	printf("1-18: %.2lf%\n",e);
	printf("19-35: %.2lf%\n",f);
	printf("36-60: %.2lf%\n",g);
	printf("60??: %.2lf%\n",h);

	return 0;
}
