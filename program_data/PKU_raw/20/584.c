void main()
{
	char s1[15],s2[4],s3[20],s4[20],max;
	int i,j,k,n1,n2;
	while(scanf("%s%s",s1,s2)!=EOF)
	{
		
		n1=strlen(s1);
		n2=strlen(s2);
		
		strcpy(s3," ");strcpy(s4," ");
          max=s1[0];
		  for(i=0,k=0;i<n1;i++)
		  {
			  if (s1[i]>max) {max=s1[i];k=i;}
		  }
		  
		  strncpy(s3,s1,k+1);
                    s3[k+1]='\0';
		  strcat(s3,s2);
		  
		  
		  for(i=k+1,j=0;s1[i]!='\0';i++,j++)
		  {
              s4[j]=s1[i];
		  }
                    s4[j]='\0';
		  strcat(s3,s4);
	     printf("%s\n",s3);
	}
	
}
