void main()
{
	int p=0,k=0,l=0,j=0,i=0,num[300]={0};
	char in[1000];
	for(i=0;i<1000;i++) in[i]=0;
	scanf("%s",in);
	i=0;
	while(in[i])
	{
		if(in[i]>='0'&&in[i]<='9') 
		{
			num[j]=num[j]*10+in[i]-48;
		}
		else if((in[i]<'0'||in[i]>'9')&&(in[i-1]>='0'&&in[i-1]<='9')) j++;
		i++;
	}
//	printf("%d\n",j);
	for(i=0;i<j;i++)
	{
		for(k=0;k<j-i;k++)
		{
			if(num[k]>=num[k+1])
			{
				p=num[k];
				num[k]=num[k+1];
				num[k+1]=p;
			}
		}
	}
//	for(i=0;i<=j;i++) printf("%d ",num[i]);
	for(i=j-1;i>=0;i--)
	{
		if(num[i]==num[i+1]) 
		{
			l++;
			continue;
		}
		else 
		{
			printf("%d\n",num[i]);
			break;
		}

	}
	if(l==j) printf("No\n");
}
	
