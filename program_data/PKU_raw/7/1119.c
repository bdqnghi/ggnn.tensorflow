int main()
{
	char a[260],b[260],c[260];
	int i,j,k=0,len1,len2,flag,m,t,q;
	scanf("%s%s%s",b,a,c);
	len1=strlen(a);
	len2=strlen(b);
	for(i=0;i<len2;i++)
	{flag=1;q=1;
		if(b[i]==a[0])
		{
			k=i+1;
			for(j=1;j<len1;j++)
			{
				if(b[k++]!=a[j])
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
				t=0;
				for(m=i;m<i+len1;m++)
					b[m]=c[t++];
				q=0;

			}
			
		}
		if(q==0)
			break;
	}
		printf("%s\n",b);
		return 0;
}

