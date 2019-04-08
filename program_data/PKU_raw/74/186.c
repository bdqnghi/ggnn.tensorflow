void main()
{
	double m,n,a,b,c,d,e;
	int p,q,t,mark[65500],su,sunum,i,num,num1;
	scanf("%lf %lf",&m,&n);
	p=log10(m);
	q=log10(n);
	for(i=0;i<65500;i++) mark[i]=0;
	for(i=m;i<=n;i++)
	{
		a=floor(i/10000);
		b=floor((i-a*10000)/1000);
		c=floor((i-a*10000-b*1000)/100);
		d=floor((i-a*10000-b*1000-c*100)/10);
		e=floor(i-a*10000-b*1000-c*100-d*10);
		t=log10(i);
		switch(t)
		{
		case 0:mark[i]++;break;
		case 1:if(e==d) mark[i]++;break;
		case 2:if(c==e) mark[i]++;break;
		case 3:if((b==e)&&(c==d)) mark[i]++;break;
		case 4:if((a==e)&&(b==d)) mark[i]++;break;
		}
		sunum=0;
		for(su=2;su<i;su++)
			if(i%su==0) sunum++;
		if(sunum==0) mark[i]++;
		if(i==0) mark[i]=0;
		if((i==1)||(i==2)) mark[i]=2;
	}
	num=0;
	num1=0;
	for(i=m;i<=n;i++)
		if(mark[i]==2) num++;
	if(num==0) printf("no");
	else for(i=m;i<=n;i++)
	{
		if(mark[i]==2)
		{
		num1++;
		if(num1<num) printf("%d,",i);
		else printf("%d",i);
		}
	}
}

