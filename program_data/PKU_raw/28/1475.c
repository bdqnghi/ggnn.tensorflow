int main ()
{
	char s[10000],b[300][100];
	int i,n,m,j=0,k=0,tag=0;
	int a[300];
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]!=' ')
		{
			b[j][k]=s[i];
			k++;
		}
		else if(s[i]==' ')
		{
			b[j][k]='\0';
			j++;
			k=0;
		}
	}
	tag=0;
	for (m=0;m<j+1;m++)
	{	
		a[m]=strlen(b[m]); 
		if(a[m]!=0)
		{ 	
			  if(m==0) 
			  {
			  	 printf("%d",a[m]);
			  	 tag=1;
			  }
	          else
	          {
	          	 if(tag==0) 
	          	 {
	          	 	 printf("%d",a[m]);
	          	 	 tag=1;
	          	 }
	          	 else  printf(",%d",a[m]);
	          } 
		}
	}
	return 0;
}