int main()
{
	int n,a[100],i,m=0,k=0,p=0,q=0;
	scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]>=1&&a[i]<=18)
				m++;
            if(a[i]>=19&&a[i]<=35)
				k++;
            if(a[i]>=36&&a[i]<=60)
				p++;
            if(a[i]>60)
				q++;
		}
		printf("1-18: ");
			printf("%.2lf",(double)m/n*100);
			printf("%%\n");
        printf("19-35: ");
			printf("%.2lf",(double)k/n*100);
            printf("%%\n");
        printf("36-60: ");
			printf("%.2lf",(double)p/n*100);
        printf("%%\n");
        printf("60??: ");
			printf("%.2lf",(double)q/n*100);
        printf("%%\n");

	return 0;
}