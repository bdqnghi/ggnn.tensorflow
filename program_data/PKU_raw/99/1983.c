void main()
{
	int i,n,a=0,b=0,c=0,d=0,s[100];
	double q,w,e,r;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
		if(1<=s[i]&&s[i]<19) a++;
        if(19<=s[i]&&s[i]<36) b++;
        if(36<=s[i]&&s[i]<61) c++;
        if(61<=s[i]) d++;
	}
	q=(double)a/n*100;
    w=(double)b/n*100;
    e=(double)c/n*100;
    r=(double)d/n*100;
	printf("1-18: %.2lf%\n19-35: %.2lf%\n36-60: %.2lf%\n60??: %.2lf%\n",q,w,e,r);
}