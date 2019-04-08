int main()
{
	char a[251],b[251],c[251],e;
	int m,n,i,l,x,j;
	scanf("%s",a);
	scanf("%s",b);
         m=strlen(b);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		a[i]=a[i]-48;
	}	
	for(i=0;i<m;i++)
	{
		b[i]=b[i]-48;
	}
    
	for(i=0;i<n/2;i++)
	{
             e=a[i];
	   a[i]=a[n-1-i];
	   a[n-i-1]=e;
	}
	for(i=0;i<m/2;i++)
	{
            e=b[i];
	   b[i]=b[m-1-i];
	   b[m-i-1]=e;
	}
	for(i=n-1;i>0;i--)
	{
		if(a[i]==0&&n!=1) n--;
		else break;
	}
	for(i=m-1;i>0;i--)
	{
		if(b[i]==0&&m!=1) m--;
		else break;
	}
	if(n<m)
	{
		l=n;
		x=m;
			for(i=0;i<l;i++)
			{
	    	  if((a[i]+b[i])<10) b[i]=a[i]+b[i];
		      else
			  {
			    b[i]=a[i]+b[i]-10;
				for(j=i+1;j<=x;j++)
				{				    
					if(j==x)
					{
						printf("1");
						break;
					}

				    if(b[j]+1<10)
					{
					  b[j]++;
					  break;
					}
			    	else
					{
					  b[j]=0;
					}
				}
			    
			  }
		}
    	
		for(i=x-1;i>-1;i--)
		{
			printf("%c",b[i]+48);
		}
	}
	else
	{
		l=m;
		x=n;
	
		for(i=0;i<l;i++)
		{
	    	if((a[i]+b[i])<10) a[i]=a[i]+b[i];
		    else
			{
			    a[i]=a[i]+b[i]-10;
				for(j=i+1;j<=x;j++)
				{				    
					if(j==x)
					{
						printf("1");
						break;
					}

				    if(a[j]+1<10)
					{
					  a[j]++;
					  break;
					}
			    	else
					{
					  a[j]=0;
					}
				}
			    
			}
		}
    	
		for(i=x-1;i>-1;i--)
		{
			printf("%c",a[i]+48);
		}
	}	
	return 0;
}