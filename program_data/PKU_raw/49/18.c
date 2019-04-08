int main()
{
	int n,i,j,k,a,b,q,w=0;
	char s[500];
	scanf("%s",s);
	n=strlen(s);
	a=n/2;
	for(j=1;j<a+1;j++)
	{
		k=j;
		for(i=0;i<n-1;i++)
		{
			for(b=0;b<k;b++)
			{
				w=0;
				if(s[i+b]==s[i+2*k-b-1])
				{
					;
				}
				else
				{
					w=1;
					break;
				}
			}
			if(b==k)
			{
				for(q=0;q<j*2;q++)
				{
					printf("%c",s[i+q]);
				}
				printf("\n");
			}
		}

	}	
	return 0;
}