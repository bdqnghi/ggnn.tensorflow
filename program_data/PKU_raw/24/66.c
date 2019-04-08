int main()
{
	char a[300],*p=a;
	int i,j,n,b[50]={-1},sum[50]={0},r=0,s=100,m=0,k,t;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	
	{
        if(*(p+i)==' ')
			{
				m++;
				*(b+m)=i;
				}
	}
	
	*(b+m+1)=n;
	for(j=0;j<=(m+1);j++)
	{
		*(sum+j)=*(b+j+1)-*(b+j);
	}
	for(j=0;j<(m+1);j++)
	{		
	if(r<*(sum+j))
			{
				r=*(sum+j);
				k=j;
		}
		if(s>*(sum+j))
			{
				s=*(sum+j);
				t=j;
				
		}
	}
	  
		for(i=*(b+k)+1;i<*(b+k+1);i++)
			printf("%c",*(p+i));
			printf("\n");
		for(i=*(b+t)+1;i<*(b+t+1);i++)	
	    printf("%c",*(p+i));
		return 0;
	}
		
    		
	
	

		
		
	