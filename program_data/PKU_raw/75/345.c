
int main()
{
	char x[10000],y[10000];
	int c[2000]={0},g[2000]={0},a[2000]={0},l1=-1,l2=0,num1=0,num2=0,i=0,k,max;
	
	cin.getline(x,10000);
	
	while(x[i]!='\0')
	{
		num1++;
		for(;x[i]!=','&&x[i]!='\0';i++)
		{
			l2++;
			
		}
		
		
		for(k=l2-l1-2;k>=0;k--,l1++)
		{
			
			c[num1]=c[num1]+(int)pow(10.0,k)*(x[l1+1]-'0');
			
		}
		if(x[i]=='\0')
			{
				break;
			}
		l1=l2,i++;
		l2++;
	}
	cin.getline(y,10000);
	i=0,l2=0,l1=-1;
	while(y[i]!='\0')
	{
		num2++;
		for(;y[i]!=','&&y[i]!='\0';i++)
		{
			l2++;
			
		}
		
		
		for(k=l2-l1-2;k>=0;k--,l1++)
		{
			
			g[num2]=g[num2]+(int)pow(10.0,k)*(y[l1+1]-'0');
			
		}
		if(y[i]=='\0')
			{
				break;
			}
		l1=l2,i++;
		l2++;
	}
	for(i=1;i<=num1;i++)
	{
       for(k=c[i];k<g[i];k++)
	   {
		   a[k]++;
	   }
	}
	max=0;
	for(i=0;i<=999;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
		cout<<num1<<" "<<max<<endl;
		return 0;
}

	   


	
		
		
		
		
		
		
		
	
	
	
  


	
	
	
	
	





