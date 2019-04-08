void main()
{
	char s[100],c[100][100];
	int a[100],e[100],b[100],k,sig=0,n,i,j,sum=0,mid,temp;
	gets(s);
	n=strlen(s);
	for(i=1,e[1]=0,k=0;i<n;i++,k++)
	{
		for(j=1;;j++,k++)
		{
			if(s[k]!=32&&s[k]!='\0')
			{	
									
				c[i][j]=s[k];
			}
			else if(s[k]==32)
			{
				a[i]=j-1;           		//?i????????/
				break;
			}
			else 
			{
				a[i]=j-1; 
          		sig=1;
				break;
			}
		}
		if(i!=1)
		e[i]=e[i-1]+a[i-1]+1;					//?i?????????s???e[i]????/
		if(sig==1)
		break;
	}
		sum=i;									//?????????sum/
	
	for(i=1;i<=sum;i++)
		b[i]=i;		
	
	for(i=1;i<sum;i++)
	{
		if(a[i]>=a[i+1])
		{
			mid=a[i];
			a[i]=a[i+1];
			a[i+1]=mid;
			temp=b[i];
			b[i]=b[i+1];
			b[i+1]=temp;
		}
	}
	i=b[sum];
	for(k=e[i];k<=e[i]+a[sum]-1;k++)
		{
			printf("%c",s[k]);
		}
	printf("\n");
	for(i=sum;i>0;i--)
	{
		if(a[i]<a[i-1])
		{
			mid=a[i];
			a[i]=a[i-1];
			a[i-1]=mid;
			temp=b[i];
			b[i]=b[i-1];
			b[i-1]=temp;
		}
	}
	i=b[1];
	k=e[i];
	printf("%c",s[k]);
	for(k=e[i]+1;k<=e[i]+a[1]-1;k++)
		{
			printf("%c",s[k]);
		}
	
		
}
	
