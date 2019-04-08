int main()
{
	char sent[100],zfc[100];
	int i,k=0,count;
	gets(sent);
	int n=strlen(sent);
	for(i=0;i<n;i++)
	{
		if(sent[i]==' ')
		{
		  zfc[i]='\0';
		  break;
		}
		else
		zfc[i]=sent[i];
	}
	if(i==1)
	{
		for(k=i+1;k<n;k++)
		{
		
		if(zfc[0]==sent[k])
		{
			printf("%d",k-i);
			break;
		}
		}
	}
	else{	
	for(k=i+1;k<n;k++)
	{
		count=0;
		for(int m=0;m<i-1;m++)
		{
			if(zfc[m]!=sent[m+k])
				break;
			else 
				count++;
		}
		if (count==i-1)
		{   k=k-i-1;
			printf("%d",k);
			break;
		}
	}
	}
	return 0;
}
