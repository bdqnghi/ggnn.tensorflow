int main()
{
	int a[300],i,n=0,k=1,m;
	char p;
	scanf("%d%c",&a[1],&p);
	while(p==',')
	{
		k++;
		scanf("%d%c",&a[k],&p);
	}
	if(k==1){printf("No");}
	else
	{
	    m=a[1];
		for(i=2;i<=k;i++){if(m<a[i])m=a[i];}
		for(i=1;i<=k;i++){if(a[i]>n&&a[i]!=m)n=a[i];}
		if(n==0){printf("No");}
        else{printf("%d",n);}
	}
	return 0;
}