int main()
{
	int n;
	scanf ("%d", &n);
	while (n > 0)
	{
		char c[100],b[100];
		int  j, i, k=0, s=0, t;
		scanf ("%s\n%s", &c, &b);
		while (c[k]!='\0')
		{
			k++;
		}
		while (b[s]!='\0')
		{
			s++;
		}
		t=k-s;
		for (i=k-1;i>=t;i--)
		{   
			if(c[i]>=b[i-t] )
			{
				c[i]=c[i]-b[i-t]+'0';			
			}
			else{
				c[i-1]--;
				c[i]=c[i]+10-b[i-t]+'0';	
			}
			
		}
		
		s = 0;
				for (s;s <k; s++)
			printf("%c", c[s]);
		printf("\n");
		
		n--;
	}

	return 0;
}
