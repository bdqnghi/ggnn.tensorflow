void main()
{
	int a[300],i=0,j,k,temp;
	char b;
	for(j=0;j<300;j++)
		a[j]=0;
	do
	{
		scanf("%c",&b);
		if((b>='0'&&b<='9'))
			a[i]=a[i]*10+b-'0';
		else
			i++;
	}while(b!='\n');
	for(j=0;j<i;j++)
		for(k=0;k<i-j;k++)
			if(a[k]<a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
			if(a[0]==a[i-1]||i==1)
				printf("No");
			else
				for(k=0;k<=i;k++)
					if(a[k]<a[0])
					{
						printf("%d",a[k]);
						break;
					}
}