void main()
{
	int a[300],n,l,i,j,k=0,r,tp;
	char s[2000],temp[2000];
	gets(s);
	strcpy(temp,s);
	l=strlen(temp);
	for(i=0;i<l;i++)
	{
		
		if((temp[i]==',')||(i==l-1))
		{
			a[k]=atoi(temp);
		    k++;
		    n=k;
			for(j=0;j<l-i-1;j++)
				temp[j]=temp[i+j+1];
			temp[l-i-1]='\0';
			l=strlen(temp);
			i=-1;
		}
	}//???n???

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				tp=a[j+1];
				a[j+1]=a[j];
				a[j]=tp;
			}
		}
	}
	//????,????

	if(n==1||a[0]==a[n-1])
		printf("No\n");
	else
	{
		for(r=0;r<n;r++)
			if(a[r]!=a[0])
			{
				printf("%d\n",a[r]);
				break;
			}
	}
	//????
}
		










