void main()
{
	int date,l=0,a[12],mouth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},i,j,k,b[100],*p;
	scanf("%d",&date);
	p=a;
	if(6-date>0)
		b[0]=6-date;
	else b[0]=13-date;
	i=0;k=0;
	while(b[i]<=365)
	{
		b[i+1]=b[i]+7;
		i++;k++;}
	for(i=0;i<=k;i++)
	    for(j=0;j<13;j++)
		{
			if(b[i]-mouth[j]==13)
			{
				b[i]=b[i]-mouth[j];
				*p++=j+1;
			     l++;
			}
			else b[i]=b[i]-mouth[j];
		}
	for(i=0;i<l-1;i++)
		printf("%d\n",a[i]);
	printf("%d\n",a[l-1]);
}