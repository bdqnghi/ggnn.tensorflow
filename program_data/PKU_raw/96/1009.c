void main()
{
	int i,n=1;
	for(i=1;i<=n;i++)
	{
		int i;
		char n1[110],n2[110],n[110];
		scanf("%s",n1);
		strcpy(n2,"13");
		int l1=strlen(n1),l2=strlen(n2);
		if(l1<l2)
		{
			printf("0\n");
			printf("%s",n1);
		}
		else
		{
			for(i=l2;i<=l1-1;i++)
			{
				n2[i]='0';	
			}
			n2[i]='\0';
			for(i=0;i<=l1-l2;i++)
			{
				n[i]='0';
			}
			n[i]='\0';
			for(i=0;i<=l1-l2;i++)
			{
				int u;
				char temp[110];
				strcpy(temp,n1);
				for(u=0;;)
				{
					int k;
					for(k=l1-1;k>=1;k--)
					{
						if(temp[k]-n2[k]>=0)
							temp[k]=temp[k]-n2[k]+'0';
						else
						{
							temp[k]=temp[k]-n2[k]+'0'+10;
							temp[k-1]--;
						}
					}
					temp[0]=temp[0]-n2[k]+'0';
					if(temp[0]>='0')
						strcpy(n1,temp);
					else
						break;
					u++;
				}
				n[i]=n[i]+u;
				for(u=l1-2;u>=0;u--)
				{
					n2[u+1]=n2[u];
				}
				n2[0]='0';
			}
			int l=0;
			for(i=0;i<=l1-l2;i++)
				if(n[i]!='0')
				{
					l=1;
					break;
				}
			for(;i<=l1-l2;i++)
				printf("%c",n[i]);
			if(l==0)
				printf("0");
			printf("\n");
			l=0;
			for(i=0;i<=l1-1;i++)
				if(n1[i]!='0')
				{
					l=1;
					break;
				}
			for(;i<=l1-1;i++)
				printf("%c",n1[i]);
			if(l==0)
				printf("0");
		}
	}
}
