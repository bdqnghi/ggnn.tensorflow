void main()
{
	int a[100],n,i,j=0,k=0,l=0,m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		
		if(a[i]<=18)
			j++;
		else if(a[i]<=35)
			k++;
		else if(a[i]<=60)
			l++;
		else
			m++;
	}
	printf("1-18: ");
	printf("%.2f%%\n",(float)j/n*100);
printf("19-35: ");
printf("%.2f%%\n",(float)k/n*100);
	   

printf("36-60: ");
printf("%.2f%%\n",(float)l/n*100);	   
printf("60??: ");
printf("%.2f%%\n",(float)m/n*100);
}
