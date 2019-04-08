void main()
{
	int a[300],n,i,j,k;
		scanf("%d",&n);
		for(i=0,k=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{for(j=0;j<i;j++)
		{if(a[j]==a[i])
		goto loop;}
		if(k!=0)
			printf(",");
        printf("%d",a[i]);k++;
loop:
		;}


}
