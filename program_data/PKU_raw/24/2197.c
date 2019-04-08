void main()
{
	char sen[5000],a[200][25]={"0"};
    int i,j,k,m,b[200]={0};
	gets(sen);
	m=strlen(sen);
	k=0;
	for(i=0;i<200;i++)
	{
		for(j=0;k<m;j++)
		{
			  if(sen[k]==' ')
			  {
				  k++;
				  a[i][j]='\0';
				  break;
			  }
			  else if(sen[k]==',')
			  {
				  k=k+2;
				  a[i][j]='\0';
				  break;
			  }
			  else a[i][j]=sen[k];
		  k++;
		}
	}
	for(i=0;a[i][0]!='\0';i++)
	{
	    b[i]=strlen(a[i]);
	}
	for(i=0;b[i+1]!=0;i++)
	{
		if(b[i]>b[i+1]) 
		{
			m=b[i];
			b[i]=b[i+1];
			b[i+1]=m;
		}
	}
	for(j=0;;j++)
	{
		m=strlen(a[j]);
		if(m==b[i])
		{
	     printf("%s\n",a[j]);
		 break;
		}
	}
	for(i=0;b[i+1]!=0;i++)
	{
		if(b[i]<b[i+1])
		{
			m=b[i];
			b[i]=b[i+1];
			b[i+1]=m;
		}
	}
	for(j=0;;j++)
	{
		m=strlen(a[j]);
		if(m==b[i])
		{
	     printf("%s\n",a[j]);
		 break;
		}
	}
}



	



	

	