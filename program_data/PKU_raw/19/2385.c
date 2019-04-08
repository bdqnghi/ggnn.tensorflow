int main()
{
	char zf1[110],zfa[110],zfb[110];
	gets(zf1);
	gets(zfa);
	gets(zfb);
	int x=strlen(zf1);
	int y=strlen(zfa);
	int z=strlen(zfb);
	int i,j;
	int k=0,m=0,g=0,h=0;
	int sz[100];
	for(i=0;i<x;i++)
	{
	 if(i==0)
	 {
		if(zf1[i]==zfa[0])
		{
			    k=0;
				if(zf1[i+y]==' '||zf1[i+y]=='\0')
				{
		    	    for(j=0;j<y;j++)
					{
				      if(zf1[i+j]==zfa[j])
					  {
                       k++;
					  }
					}
			        if(k==y)
					{
                      sz[m]=i;
			          m++;
					}
				}
		}
	 }
	 if(i!=0)
	 {
       	if(zf1[i]==zfa[0]&&zf1[i-1]==' ')
		{
			    k=0;
				if(zf1[i+y]==' '||zf1[i+y]=='\0')
				{
		    	    for(j=0;j<y;j++)
					{
				      if(zf1[i+j]==zfa[j])
					  {
                       k++;
					  }
					}
			        if(k==y)
					{
                      sz[m]=i;
			          m++;
					}
				}
		}
	 }
	}
	for(j=0;j<x;j++)
	{
	    h=0;
		for(i=0;i<m;i++)
		{
			if(j==sz[i])
			{
				printf("%s",zfb);
				j=j+y-1;
                h=1;
				break;  
			}	
		}
		
		if(h!=1)
			   {
                     printf("%c",zf1[j]);
			   }
	}
	return 0;
}
