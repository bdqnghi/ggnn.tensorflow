int main()
{
	int n,i,a[100];
	int b=0,c=0,d=0,e=0;
	double B,C,D,E;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	    
	for(i=0;i<n;i++){
		if(a[i]>=0&&a[i]<=18)
			b++;
		if(a[i]>18&&a[i]<=35)
			c++;
		if(a[i]>35&&a[i]<=60)
			d++;
		if(a[i]>60)
			e++;
	}
         B=(double)b/n;
		 C=(double)c/n;
		 D=(double)d/n;
		 E=(double)e/n;
		 printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",B*100,C*100,D*100,E*100);

		return 0;
}

