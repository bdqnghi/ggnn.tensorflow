	int main()
	{
		char a[3000],b[30000];
		int i,x=0,y,n,k=0;
	
			gets(a);
			
			for(i=0;a[i]!='\0';i++)
			{   
				if((a[i]!=' ')||((a[i]==' ')&&(a[i+1]!=' ')))
				{
					b[k]=a[i];
					
					k++;
				}
				
				
				if((a[i]==' ')&&(a[i+1]==' '))
				{		
					b[k]=' ';
					k++;
					x=i;
					for(y=x+1;a[y]==' ';y++)
					{
						i++;	
					}
				
				}
			}
			b[k]='\0';
					
			puts(b);
			
		
		return 0;
	}