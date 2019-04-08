int main ()
{
	char zfc[2000];
	gets(zfc);
	int c;
	c=strlen(zfc);

	int i,k=1;
	int kong[200];
    kong[0]=0;
	for(i=0;i<c;i++)
	{
	    if(zfc[i]==' ')
		{
		    kong[k]=i;
		    k++;
		}
	}

    if(k==1)
	{
	printf("%d",c);
	}
	else
	{
	int len[200];
	
	len[0]=kong[1];

	for(i=1;i<k-1;i++)
	{
	    len[i]=kong[i+1]-kong[i]-1;
	}
    len[k-1]=c-kong[k-1]-1;
	
    
	int xlen[200],x=0;
	for(i=0;i<k;i++)
	{
	    if(len[i]!=0)
		{
		    xlen[x]=len[i];
			x++;
		}
	}
   
	printf("%d",xlen[0]);
   for(i=1;i<x;i++)
   {
   printf(",%d",xlen[i]);
   }
    }
   return 0;
}