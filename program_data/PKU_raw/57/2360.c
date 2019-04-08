int main(int argc, char* argv[])
{   int n,i,j,l;
    char w[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%s",w);
	 l=strlen(w);
     if(w[l-1]=='y'&&w[l-2]=='l')
	    for(j=0;j<=l-3;j++)
	        printf("%c",w[j]);
     else if(w[l-1]=='r'&&w[l-2]=='e')
	    for(j=0;j<=l-3;j++)
	       printf("%c",w[j]);
	 else
         for(j=0;j<=l-4;j++)
	        printf("%c",w[j]);
	 printf("\n");
	}
	return 0;
}