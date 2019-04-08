int main()
{
    int i,j,n;
    char s[21],x[99];              
    scanf("%d",&n);             
    for (i=0;i<n;i++)
	{    
        scanf("%s",&s);          
        for(j=0;s[j];j++) 
		{ 
            if(!((s[j]=='_')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9'&&j>0)))
			{
				x[i]=0;
                break;
			}
			else
				x[i]=1;
        }
	}
        

		for (i=0;i<n;i++)
		{
			if(x[i]==0)
			printf("no\n");
			if(x[i]==1)
			printf("yes\n");
		}   
    return 0;
}
