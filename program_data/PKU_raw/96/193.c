int main()
{
	char N[101];
	int e=1,len,i,j,n[100],shan[100];
	scanf("%s",&N);
	len=strlen(N);
	
	
	for(i=0;i<len;i++)
	{
		n[i]=N[i]-'0';
	}
	if((n[0]*10+n[1])<13)
	{
		e=2;
	}
	for(i=1;i<len;i++)
	{
		if((n[i-1]*10+n[i])/13>0)
		{
			shan[i]=(n[i-1]*10+n[i])/13;
			n[i]=(n[i-1]*10+n[i])%13;
		}
		else 
		{
			for(j=0;;j++)
			{
				if((n[i-1]*10+n[i])/13==0)
				{
					n[i]=n[i-1]*10+n[i];
					shan[i]=0;
			        i++;
				}
				else
				{
					break;
				}
			}
				shan[i]=(n[i-1]*10+n[i])/13;
			    n[i]=(n[i-1]*10+n[i])%13;
		}
	}
	for(i=e;i<len-1;i++)
	{
		printf("%d",shan[i]);
	}
	printf("%d\n",shan[len-1]);
	printf("%d",n[len-1]);
	return 0;
}
