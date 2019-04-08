int main()
{
	int i=0,j=0,k=0,h=0;
	char a[100],b[100];
	cin.getline(a,100);
	for(i=0;i<100;i++)
	{
		if(a[i]!='\0')
			k++;
	}
	for(i=k;i>=0;i--)
	{    
		if(a[i]!=' ') 
		{
			continue;
		}
		if(a[i]==' ')
		{
			for(j=i+1;;j++)
			{    
				if(a[j]==' '||a[j]=='\0')
				{
					b[h++]=' ';
					break;
				}
				b[h++]=a[j];				

			}
		}
	}
	for(i=0;;i++)
	{   
		if(a[i]==' '||a[i]=='\0')
				{
					
					break;
				}
		b[h++]=a[i];
	}
	b[h]='\0';
		
	cout<<b<<endl;
	return 0;
}