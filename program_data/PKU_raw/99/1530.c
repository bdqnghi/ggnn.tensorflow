int main()
{
	int i,n,o;
	double a=0,b=0,c=0,d=0,al,bl,cl,dl;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&o);
		if(o<19)
		{
			a+=1;
		}
		else if(o<36&&o>18)
		{
			b+=1;
		}
		else if(o<61&&o>35)
		{
			c+=1;
		}
		else if(o>60)
		{
			d+=1;
		}
	}
	al=100*a/n;
	bl=100*b/n;
	cl=100*c/n;
	dl=100*d/n;
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",al,bl,cl,dl);
	return 0;
}
	

