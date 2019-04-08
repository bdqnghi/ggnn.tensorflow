int main() {
	int n,a=0,b=0,c=0,d=0,m,i;
	double o,p,q,r;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&m);
		if((m<=18)&&(m>=1)){
			a+=1;
		}else if((m>=19)&&(m<=35)){
			b+=1;
		}else if((m>=36)&&(m<=60)){
			c+=1;
		}else{
			d+=1;
		}
	}
    o=1.0*a*100/n;
    p=1.0*b*100/n;
	q=1.0*c*100/n;
	r=1.0*d*100/n;
		printf("1-18: ");
		printf("%.2lf%%\n",o);
		printf("19-35: ");
		printf("%.2lf%%\n",p);
		printf("36-60: ");
		printf("%.2lf%%\n",q);
		printf("60??: ");
		printf("%.2lf%%\n",r);
	    return 0;
	}