int main()
{
	int n;
	double x,y,z,p;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int i;
	int sz[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		if(sz[i]<=18){
			a+=1;		
		}
		else if(sz[i]>18,sz[i]<=35){
			b+=1;
		}
		else if(sz[i]>35,sz[i]<=60){
			c+=1;
		}
		else{
			d+=1;
		}
	}
	x=(double)a/n*100;
			y=(double)b/n*100;
			z=(double)c/n*100;
			p=(double)d/n*100;
	printf("1-18: %.2lf%%\n",x);
	printf("19-35: %.2lf%%\n",y);
	printf("36-60: %.2lf%%\n",z);
	printf("60??: %.2lf%%\n",p);
	return 0;
}