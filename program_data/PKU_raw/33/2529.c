int main()
{	
	char q;
	int n;
	scanf("%d",&n);
	scanf("%c",&q);
	int i,j,k,b,u;
	b=0;
	char byte[256];
	for(u=0;u<n;u++)
	{
	    scanf("%s",byte);
	    b=strlen(byte);
     	for(j=0;j<b;j++)
		{
	    	switch(byte[j])
			{
	    	case'T':
	     		byte[j]='A';
	    		break;
	     	case'A':
		    	byte[j]='T';
	    		break;
	    	case'C':
	    		byte[j]='G';
	      		break;
	    	case'G':
	      		byte[j]='C';
		    	break;
			}
		}
    	for(k=0;k<b;k++)
		{
     		printf("%c",byte[k]);
		}
		printf("\n");
	}
	
	return 0;
}
