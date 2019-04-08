int main()
{
	int n,i,x[100];
	double a=0,b=0,c=0,d=0,s,t,u,v,all;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		if(x[i]<=18)
			a++;
		else if(x[i]>18&&x[i]<36)
			b++;
		else if(x[i]>35&&x[i]<61)
			c++;
		else 
			d++;
	}
	all=a+b+c+d;
	s=100*a/all;
	t=100*b/all;
	u=100*c/all;
	v=100*d/all;
    printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",s,t,u,v);
	return 0;
}