void main()
{
	int i=0,j,k=0,l,a[300]={0},temp;
	char b[500];
	gets(b);
    while(b[i]!='\0')
	{
		if(b[i]==',') 
		{
			k=k+1;
		}
		else 
		{
			a[k]=a[k]*10+b[i]-'0';
		}
		i=i+1;
	}
	l=0;
	for(i=1;i<=k;i++)
	{
		if(a[0]==a[i]) l=l+1;
	}
	if(l==k) printf("No");
	else 
	{
		if(k==0) printf("No");
	    else 
    	j=0;
    	for(i=1;i<=k;i++)
		{
     		if(a[j]<a[i]) j=i;
		}
        temp=a[k];
		a[k]=a[j];
		a[j]=temp;
		for(i=0;i<k;i++)
		{
			if(a[i]==a[k]) a[i]=-1;
		}
       	a[k]=-1;
    	j=0;
	    for(i=1;i<=k;i++)
		{
		   if(a[j]<a[i]) j=i;
		}
	    printf("%d",a[j]);
	}
}


	