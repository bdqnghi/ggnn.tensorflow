void main()
{
	char c=',';
	int a[300],i=0,k,j,t,m=0;
	while(c==',')
	{
		scanf("%d%c",&a[i],&c);
		i++;
	}
	if(i==0) printf("No");
	else{
		for(k=0;k<i-1;k++)
			for(j=0;j<i-1-k;j++)
			{
				if(a[j]<a[j+1])
				{
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
			}
	for(k=1;k<i;k++)
		if(a[k]<a[0]) {printf("%d",a[k]);m=1;break;}
	if(m!=1) printf("No");

	
	}
}
