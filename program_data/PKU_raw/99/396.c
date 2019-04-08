int main(){
	int n;
	int i;
	int old[9999];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&old[i]);
	}
	int one=0,two=0,three=0,four=0;
	for(i=0;i<n;i++){
		if(old[i]>60)
			four=four+1;
		else if(old[i]>35)
			three=three+1;
		else if(old[i]>18)
			two=two+1;
		else
			one=one+1;
	}
	double onelv,twolv,threelv,fourlv;
	onelv=(double)one/n*100;
	twolv=(double)two/n*100;
	threelv=(double)three/n*100;
	fourlv=(double)four/n*100;
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",onelv,twolv,threelv,fourlv);
	return 0;
}

