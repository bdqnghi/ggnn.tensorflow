
int main()
{   char s[50],w[50],k[50];
    int i,j,t;
	unsigned int n1,n2;
	scanf("%s",s);
    scanf("%s",w);
    n1=strlen(s);
    n2=strlen(w);
	
	for (i=0;i<=n2-n1;i++)
	{   t=1;
		if(w[i]==s[0])
	{       for(j=0;j<n1;j++)
	{          if (s[j]==w[i+j])
				  t=t*1;
	           if (s[j]!=w[i+j]) 
                  t=t*0;
	}if(t==1) 
		{	printf("%d\n",i);
	      break;
		  }
	}
		
	}	
	return 0;
}

