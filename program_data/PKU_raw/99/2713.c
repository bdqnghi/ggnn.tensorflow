int main(){
	int i,n,a=0,b=0,c=0,d=0;
	int year[sum];
	double a1,b1,c1,d1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&year[i]);
	}
	for(i=0;i<n;i++){
		if(year[i]<19){
			a++;
		}else if(year[i]<36){
			b++;
		}else if(year[i]<61){
			c++;
		}else{
			d++;
		}
	}
		a1=(double)a/n*100;
		b1=(double)b/n*100;
		c1=(double)c/n*100;
		d1=(double)d/n*100;
		printf("1-18: %.2lf%%\n",a1);
		printf("19-35: %.2lf%%\n",b1);
		printf("36-60: %.2lf%%\n",c1);
		printf("60??: %.2lf%%\n",d1);
		return 0;
}
