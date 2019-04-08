int main()
{
	char c[1010]={0};
	gets (c);
	int len=strlen (c);
	for(int i=0;i<len;i++)
	    c[i]=toupper(c[i]);
	for(int i=0;i<len;i++)
		{
		int count=1;
		for(int j=i+1;j<len;j++)
	        if(c[j]!=c[i])
	           break;
	        else	
	           count++;
	    printf("(%c,%d)",c[i],count);
	    i=i+count-1;
		}        
} 