int main ()
{
	char a[100],d[100][100]={0},*p1, *p3, *p2;
	char longest[30], shortest[30];
	int i=0, j=0, k=0,flag=1;
	gets (a);
	
	p1=a;
	while (*(p1+i))
	{
		if(*(p1+i)!=' ')
        {   
			d[j][k]=*(p1+i); 
			k++;
        }
		if(*(p1+i)==' ')
		{	
			j++;
			k=0;
		}
		i++;
	}
	strcpy(longest,d[0]);
	strcpy(shortest,d[0]);
	for(k=0;k<j+1;k++)
	{	  
		if(strlen(d[k])>strlen(longest))
		{
			strcpy(longest,d[k]);
		}
		if(strlen(d[k])<strlen(shortest))
		{
			strcpy(shortest,d[k]);	
		}
    }	
	
	printf("%s",longest);	
	printf ("\n");	
	printf("%s",shortest);
	printf ("\n");
	return 0;
}