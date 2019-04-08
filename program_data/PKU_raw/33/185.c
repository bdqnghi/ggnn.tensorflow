int main()
{
	int n;
	scanf("%d",&n);
	int i,a;
	for(i=0;i<n;i++)
	{
		char zfc[256];
		scanf("%s",zfc);
        a=strlen(zfc);
		int j;
		for(j=0;j<a-1;j++)
		{
			if(zfc[j]=='A')  printf("%c",'T'); 
			
            else if(zfc[j]=='T') printf("%c",'A');
            
            else if(zfc[j]=='G') printf("%c",'C');
			
            else if(zfc[j]=='C') printf("%c",'G');
			
		}
            if(zfc[j]=='A') printf("%c\n",'T');
            else if(zfc[j]=='T') printf("%c\n",'A');
            else if(zfc[j]=='G') printf("%c\n",'C');
            else if(zfc[j]=='C') printf("%c\n",'G');
	}
	return 0;
}