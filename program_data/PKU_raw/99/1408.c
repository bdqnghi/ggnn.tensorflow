int main()
{
	int n,i,m[100],a=0,b=0,c=0,d=0;
	double q,w,e,r;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m[i]);
		if(m[i]<=18) {a++;}
		else {if(m[i]<=35) b++;
    else if(m[i]<=60) c++;
    else  d++;}}
	q=(double)a/(double)n*100;
	w=(double)b/(double)n*100;
    e=(double)c/(double)n*100;
     r=(double)d/(double)n*100;
	 printf("1-18: %.2lf%%\n",q);
printf("19-35: %.2lf%%\n",w);
printf("36-60: %.2lf%%\n",e);
printf("60??: %.2lf%%",r);
return 0;
}