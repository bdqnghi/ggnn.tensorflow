int main()
{
	char str[350],x[400][20],temp[350];
	int n,i=0,j=0,k,l,h=0;
	gets(str);
	n=strlen(str);
	while(i<n)
	{
		if(str[i]>'0'&&str[i]<='9')
		{
		    k=0;
		    while(str[i]>='0'&&str[i]<='9')
			{
			        x[j][k]=str[i];
			        i++;
		         	k++;
			}
	    	x[j][k]='\0';
		    j++;
		}
		else
		    i++;
	}
	if(j>1)
	{
	  for(i=0;i<j;i++)
		for(l=0;l<j-i-1;l++)
			if(strlen(x[l])==strlen(x[l+1])&&strcmp(x[l],x[l+1])>0)
			{
				strcpy(temp,x[l]);
				strcpy(x[l],x[l+1]);
				strcpy(x[l+1],temp);
			}
			else if(strlen(x[l])>strlen(x[l+1]))
			{
				strcpy(temp,x[l]);
				strcpy(x[l],x[l+1]);
				strcpy(x[l+1],temp);
			}
      for(i=j-1;i>0;i--)
		  if(strcmp(x[i],x[i-1]))
		  {
			  printf("%s\n",x[i-1]);h+=1;break;
		  }
	  if(i=1&&h==0
		  ) printf("No\n");
	}
	else printf("No\n");


}