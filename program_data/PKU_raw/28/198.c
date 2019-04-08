int lon(char a[])
{
	int i,n=0;
	for(i=0;a[i]!='\0';i++)
		n++;
	return(n);
}
void main()
{
	char a[1000]={'\0'},b[200][200]={'\0'};
   int i,j=0,k=0;
    gets(a);
    for(i=0;i<lon(a);i++)
	{  
      if(a[i]!=' ')
	  {  if(a[i-1]!=' ')
		{b[j][k]=a[i];k++;}
		  else
		  {j++;b[j][k]=a[i];k++;}
	  }
      else{k=0;}  
	 }
	for(i=0;i<j;i++)
		printf("%d,",lon(b[i]));
	printf("%d",lon(b[j]));
}