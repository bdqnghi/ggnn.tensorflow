int main(){
	char z[20000];
	int i,j=0,k;
	int s[30000];
	int n;
	gets(z);
	
	n=strlen(z);
	if(z[0]==' ')
	{
		for(i=1;i<n;i++)
		{
			if(  (z[i-1]==' ')  &&  (z[i]!=' ')   )
			{
				j++;
				s[j]=0;
				for(k=i;k<n;k++)
				{	
					s[j]++;
					if((z[k]!=' ')&&(z[k+1]==' '))
					{
						break;
					}
					
				}
			}
		}
	}
	if(z[0]!=' ')
	{
		for(i=0;i<n;i++)
		{
			if(  (i==0)||((i>0)&&(z[i-1]==' ')&&(z[i]!=' '))    )
			{
				j++;
				s[j]=0;
				for(k=i;k<n;k++)
				{	
					s[j]++;
					if((z[k]!=' ')&&(z[k+1]==' '))
					{
						break;
					}
					
				}
			}
		}
	}
				
	for(i=1;i<=j-1;i++)
	{
		printf("%d",s[i]);
		printf(",");
	}
	printf("%d",s[j]);
	
	
	
	
	return 0;
}
