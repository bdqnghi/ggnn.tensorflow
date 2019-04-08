int main()
{
	char str[81];
	int n,N,i,k=1,l=1,len;
	scanf("%d",&N);
	getchar();
	for(n=0;n<N;n++)
	{
	
	    gets(str);
	  len=strlen(str);
	   if(len==1)
	   {
	   {
		   if(str[0]>='a'&&str[0]<='z'||str[0]>='A'&&str[0]<='Z'||str[0]=='_')
			   printf("1\n");
		   else printf("0\n");
	   }
	   }
	   else{
		if(str[0]>='a'&&str[0]<='z'||str[0]>='A'&&str[0]<='Z'||str[0]=='_')
		{
			k=1;
		}
		else k=0;

		if(k==1){
			for(i=1;(str[i]!='\0');i++){
				if((str[i]<'a'||str[i]>'z')&&(str[i]<'A'||str[i]>'Z')&&(str[i]<'0'||str[i]>'9')&&(str[i]!='_'))
				{
					l=0;
					break;
				}
				else l=1;
			}
		}
		if(k==1&&l==1)printf("1\n");
		if(k==0||l==0)printf("0\n");
		printf("\n");
	}
	}	
} 
