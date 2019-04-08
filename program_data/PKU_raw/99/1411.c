int main()
{
	int n,i,a=0,b=0,c=0,e=0,m[100];
	double a1,b1,c1,e1;

		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&m[i]);
		}
		for(i=1;i<=n;i++)
		{
			if(m[i]<19)
			{a=a+1;}
			else if((m[i]>18)&&(m[i]<36))
			{b=b+1;}
            else if((m[i]>35)&&(m[i]<61))
			{c=c+1;}
			else if(m[i]>60)
			{e=e+1;}


		}
		a1=(double)a/n;
		b1=(double)b/n;
	    c1=(double)c/n;
		e1=(double)e/n;
		printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",a1*100,b1*100,c1*100,e1*100);
		return 0;

}