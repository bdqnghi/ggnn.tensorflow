int main() {
	int n,i,a=0,b=0,c=0,d=0,e;
    scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&e);
		if(e<=18)
			a+=1;
		else{
			if(e<=35)
			b+=1;
		else{
			if(e<=60)
            c+=1;
		else{
			d+=1;
		}
		}
		}

	}
	
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",100.0*a/n,100.0*b/n,100.0*c/n,100.0*d/n);
	return 0;
}
