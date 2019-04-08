void main()
{
	char a[100]={'\0'},b[100]={'\0'},re[100]={'\0'},n,i=0,l1=0,k=0,l2=0;
	scanf("%d",&n);
	while(scanf("%s\n%s",a,b)!=EOF)
	{
		l1=strlen(a);
		l2=strlen(b);
			k=l1-l2;
		for(i=l1-1;i>=k;i--)
		{
			if(a[i]>=b[i-k])
			{
				re[i]=a[i]-b[i-k]+'0';
			}
			else
			{
				re[i]=a[i]+10-b[i-k]+'0';
				a[i-1]=a[i-1]-1;
			}
	
		}
                  for(i=k-1;i>=0;i--)
                 {
                    re[i]=a[i];
                  	}
			
           printf("%s\n",re);
                
                 for(i=0;i<100;i++)
                 {
                   a[i]='\0';
                   b[i]='\0';
                   re[i]='\0';
                  }
                            

				
		
	}
	




}
		

