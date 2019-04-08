void main()
{
	char a[1600];
	int n[301]={0};
	int i,j=0,len,t;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=',')
			n[j]=n[j]*10+a[i]-'0';
		else
			j++;
	}
	len=j+1;
	for(i=0;i<len-1;i++)
		for(j=0;j<len-i-1;j++)
			if(n[j]<n[j+1])
			{
				t=n[j];
				n[j]=n[j+1];
				n[j+1]=t;
			}
	for(i=1;i<len;i++)
		if(n[0]!=n[i])
			break;
	if(i==len)
		printf("No");
	else
		printf("%d",n[i]);
}