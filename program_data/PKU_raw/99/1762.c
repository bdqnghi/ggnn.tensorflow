int main(){
	int n,i;
	int nianlin[100];
	int a=0,b=0,c=0,d=0;
	double e,f,g,h;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&nianlin[i]);
	}
	for(i=0;i<n;i++)
	{
		if(nianlin[i]<=18&&nianlin[i]>=1)
		{
			a+=1;
		}
		if(nianlin[i]<=35&&nianlin[i]>=19)
		{
			b+=1;
		}
		if(nianlin[i]<=60&&nianlin[i]>=36)
		{
			c+=1;
		}
		if(nianlin[i]>=61)
		{
			d+=1;
		}
	}
	e=a*1.0/n*100;
	f=b*1.0/n*100;
	g=c*1.0/n*100;
	h=d*1.0/n*100;
	printf("1-18: %.2lf%%\n",e);
	printf("19-35: %.2lf%%\n",f);
	printf("36-60: %.2lf%%\n",g);
	printf("60??: %.2lf%%\n",h);
	return 0;
}
