int main()
{
	char a[100],b[100];
	int j=0;
	int c[100];
	int length1,length2;
	int i,k,m,s;
	scanf("%s%s",a,b);
    length1=strlen(a);
    length2=strlen(b);
	for(i=0;i<length2;i++)
	{
		if(a[0]==b[i])
		{

			c[j]=i;
			j++;
		}
	}
	for(k=0;k<j;k++)
	{
		s=c[k];
	
		for(m=0;m<length1;m++)
		{
			
			if(a[m]==b[c[k]])
			{
				
				c[k]++;
			}
			else
			{
				break;
			}
			
		}
		if(m>=length1)
		{
			printf("%d",s);
			break;
		}


	}
	return 0;
	
}
