int main()
{
    int n,s=0,i,m;
    char a[A];
    gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		m=0;
		if(a[i]==' ') continue;
		else                                 
		{
			if(s!=0) printf(",");
			for(;i<n;i++)
			{
			
			
				if(a[i]==' ') 	{printf("%d",m);s=1;break;}  
				if(i==n-1) {printf("%d",m+1);s=1;break;}  
				m++;   
			}
		}
	}
	return 0;
}