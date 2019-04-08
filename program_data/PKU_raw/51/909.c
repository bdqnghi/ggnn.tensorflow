

int main ()
{   int n,i,j,shu[500],k;
    unsigned int l;
    char s[500],m[500][6];
    scanf("%d",&n);
	getchar();
	gets(s);
	l=strlen(s);
	for(i=0;i<=l-n;i++)
	{   for (j=0;j<n;j++)
	{     m[i][j]=s[i+j];
	      m[i][n]='\0';
	}
	}
    for(i=0;i<=l-n;i++)
	{  shu[i]=1;
	   for(j=i+1;j<=l-n;j++)
	   
	   if( strcmp(m[i],m[j])==0)
		     shu[i]=shu[i]+1;  
	}
	k=0;
    for(i=0;i<=l-n;i++)
	   if (shu[i]>k)
	    k=shu[i]; 
	   if(k==1)
		   printf("NO\n");
	   else
	   {
	    printf("%d\n",k);
	    for(i=0;i<=l-n;i++)
		if (shu[i]==k)
			 printf("%s\n",m[i]);
	   }
	return 0;
}


