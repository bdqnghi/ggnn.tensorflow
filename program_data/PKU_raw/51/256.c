int main()
{
	int n,i,j,k,t,len,max;
	int m[600]={0};
	char s[600],w[600][5];
	int flag;
	char ss[5];
	
    scanf("%d\n",&n);
	gets(s);
	len=strlen(s);
	i=0;
	t=0;
	
	while(i<len-n+1)
	{
	    flag=-1;
		for(j=i;j<i+n;j++) 
          ss[j-i]=s[j];
		ss[n]=0;
		for(j=0;j<t;j++)
		   if(strcmp(w[j],ss)==0) 
		   {
		     flag=j;
			 break;
		   }
		if(flag!=-1) 
		{
		  m[flag]++;
		  i++;
		  continue;
		}
		strcpy(w[t],ss);
		t++;
		m[t-1]++;
		i++;
	}
	
	max=0;
	for(i=0;i<t;i++)
		if(m[i]>max) 
          max=m[i];
	if(max<=1)
      printf("NO");
	else
	{
		int flag=1;
		printf("%d\n",max);
		for(i=0;i<t;i++)
			if(m[i]==max)
			{
				if(flag==0)
                  printf("\n");
				printf("%s",w[i]);
				if(flag)
                  flag=0;
			}
	}
	return 0;

}

