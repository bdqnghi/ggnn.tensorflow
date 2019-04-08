void main()
{
	int i,k,j,t,a[300],p=1;
	char c;
	for(i=0;i<300;i++)
	{
		scanf("%d%c",&a[i],&c);
		if(c!=',')break;
	}
	for(k=i+1;k<300;k++)
		a[k]=0;
	for(k=0;k<i;k++)
		for(j=0;j<i-k;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		for(j=i;j>0;j--)
			if(a[j-1]<a[j])
			{
				printf("%d",a[j-1]);
				p=0;
				break;
			}
			if(p)printf("No");
}



		