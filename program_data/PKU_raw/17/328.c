int main()
{
	while(true)
	{
		char a[110]={'\0'},b[110]={'\0'};
		int i=0;
		char x='\0';
		while(true)
		{
			x=getchar();
			if(x=='\n')break;
			a[i]=x;
			b[i]=x;
			i++;
		}
		int k=1,j,n;
		while(k<i)
		{
			for(j=0;j<i-k;j++)
			{
				int zhongjian=0,l;
				if(k!=1)
				{
					for(l=j+1;l<j+k;l++)
					{
						if(a[l]=='(' || a[l]==')')zhongjian=1;
					}
				}
				
				if(a[j]=='(' && a[j+k]==')' && zhongjian==0)
				{
					a[j]='\0';
					a[j+k]='\0';
					
				}
			}
			
			k=k+1;
			
		} 
		for(n=0;n<i;n++)
		{
			
			if(a[n]=='(')a[n]='$';
			else if(a[n]==')')a[n]='?';
			else a[n]=' ';
		}
		
		for(n=0;n<i;n++)cout<<b[n];
		cout<<endl;
		for(n=0;n<i;n++)cout<<a[n];
		cout<<endl;
		
	}
	return 0;
	
}