
int main()
{
	char t,g,c[100][15]={'\0'},a[100][3];
	int i,b,j,k,h[100];
	for(i=0;;i++)
	{
		scanf("%s %s",c[i],a[i]);
		if(c[i][0]=='\0')break;
	}
	
	b=i+1;
	
	
	for(i=0;i<b;i++)
	{
		
		
		h[i]=strlen(c[i]);
		t=c[i][0];
		for(j=0;j<h[i];j++)
		{
			if(c[i][j]>t)t=c[i][j];
			
		}
		
		
		for(j=0;j<h[i];j++)
		{
			if(c[i][j]==t)
			{
				for(k=(h[i]-1);k>j;k--)
				{
					c[i][k+3]=c[i][k];
				}
				c[i][j+1]=a[i][0];
				c[i][j+2]=a[i][1];
				c[i][j+3]=a[i][2];
				
				break;
			
			}
		}
		printf("%s\n",c[i]);
	}	

	return 0;
}

