int main(int argc, char* argv[])
{
	char a[1000];
	int n,i,j,k,len,flag=0,w,max=0,b[1000]={1};
	scanf("%d",&n);
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<1000;i++)b[i]=1;
	for(i=0;i<len-n;i++)
	{
		for(j=i+1;j<len;j++)
		{
			flag=0;
			for(k=i;k<i+n;k++)
			{
				
				if(a[k]!=a[j])
				{
					w=flag;
					flag=0;
					break;
				}
				else
				{
					flag++;
				    j++;
				}
			}
			if(flag==n)
			{
				b[i]++;
				j=j-n;
			}
			else
			{
				j=j-w;
				k=k-w;
			}
		}
	}
	for(i=0;i<1000;i++)
		if(max<b[i])max=b[i];
	if(max==1)printf("NO");
	else
	{
	printf("%d\n",max);
	for(i=0;i<1000;i++)
	{
		if(b[i]==max)
		{
			for(j=i;j<i+n;j++)
				printf("%c",a[j]);
			printf("\n");
		}
	}
	}

		
		
	return 0;
}
