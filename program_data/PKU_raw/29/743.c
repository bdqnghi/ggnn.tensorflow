/*int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	double r=0.0;
	r=n*1.0/m;
	r=r*100;
	printf("%.3lf%%\n",r);
	return 0;
}*/


/*struct bingren
{
	char name[8];
	double tiwen;
	int kesou;
}bingren[100];
int main()
{
	int n,i=0,m=0;
	scanf("%d",&n);
	for(;i<n;i++){
		scanf("%s",bingren[i].name);
		scanf("%lf",&bingren[i].tiwen);
		scanf("%d",&bingren[i].kesou);
	}
	for(i=0;i<n;i++){
        if(bingren[i].tiwen>=37.5&&bingren[i].kesou==1){
				printf("%s\n",bingren[i].name);
				m++;
		}
	}
	printf("%d",m);
	return 0;
}*/
/*int main()
{
	int money;
	scanf("%d",&money);
	int a,b,c,d,e,f;
	a=money/100;
	b=(money-100*a)/50;
	c=(money-100*a-50*b)/20;
	d=(money-100*a-50*b-20*c)/10;
	e=(money-100*a-50*b-20*c-10*d)/5;
	f=(money-100*a-50*b-20*c-10*d-5*e)/1;
	printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);
	return 0;
}*/
/*int main()
{
	int n,a,b,i;
	scanf("%d",&n);
	double sz[100];
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		sz[i]=b*1.0/a;
	}
	for(i=1;i<n;i++){
		if((sz[i]-sz[0])>0.05)
		{
			printf("better\n");
		}
		else if((sz[0]-sz[i])>0.05)
		{
			printf("worse\n");
		}
		else
		{
			printf("same\n");
		}
	}
	return 0;
}*/
int main()
{
	int n,i,k,j,b,a;
	double sum=0.0;
	scanf("%d",&n);
	int geshu[100];

    //????
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		geshu[i]=k;
	}

	//????
	for(i=0;i<n;i++)
	{
		for(j=0;j<geshu[i];j++)
		{
					//??????
	        int sz[100];
	        sz[0]=1;
 	        sz[1]=2;
	        for(b=2;b<geshu[i];b++)
			{
		        sz[b]=sz[b-1]+sz[b-2];
			}
	                //??????
	        int szz[100];
	        szz[0]=2;
	        szz[1]=3;
	        for(a=2;a<geshu[i];a++)
			{
		        szz[a]=szz[a-1]+szz[a-2];
			} 
			sum=sum+szz[j]*1.0/sz[j];
		}
        printf("%.3lf\n",sum);
		sum=0.0;
	}
	return 0;
}






 