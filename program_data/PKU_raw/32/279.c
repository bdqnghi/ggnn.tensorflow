int flag=0;
char minus(char a,char b)
{   int z;
	if ((int)a>=(int)b) z=(int)a-(int)b+48;
	else 
	{
		z=(int)a-(int)b+10+48;
		flag=1;
	}
    return((char)z);
	
}
void main()
{
	char a[100],b[100];
	int n,i,j,k,la,lb,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s%s",a,b);
		printf("\n");
		la=strlen(a);
		lb=strlen(b);
		for(j=0;j<lb;j++)
		{   flag=0;
			a[la-j-1]=minus(a[la-j-1],b[lb-j-1]);
			if(flag)
			{
				for(k=1;;k++)
				{
					if(a[la-j-1-k]!='0') 
					{
						a[la-j-1-k]=a[la-j-1-k]-1;
						if(k>1)
							for(m=1;m<=k-1;m++)
								a[la-j-1-m]='9';

							break;
					}
				}
			}
		}
		printf("%s\n",a);
	}

}

				




