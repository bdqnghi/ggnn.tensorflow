int main()
{
	int n,allc,curc,all[100],cur[100],i;
	double cp,op[100];
	scanf("%d",&n);
	scanf("%d%d",&allc,&curc);
	cp=((double)curc)/((double)allc)*100;
	//printf("%lf\n",cp);
	for(i=0;i<n-1;i++)
	{
		scanf("%d%d",&all[i],&cur[i]);
		op[i]=((double)cur[i])/((double)all[i])*100;
		//printf("%lf\n",op[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(op[i]-cp>5)printf("better\n");
		else if(op[i]-cp<-5)printf("worse\n");
		else printf("same\n");
	}
	return 0;
}