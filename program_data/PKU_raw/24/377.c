void main()
{
	char a[5000]={""},b[50][100];
	int c[50]={0},i,j,k=0,t,max=0,min=0,sum=0;
		gets(a);
	for(i=0;i<strlen(a);)
	{
		for(j=0;a[j+sum+k]!=' ' && a[j+sum+k]!='\0';j++)
	{
		c[k]=c[k]+1;
		b[k][j]=a[j+sum+k];/*??A??????????*/
		i++;
	}
		b[k][j]='\0';
	    k++;
		i++;
		sum=j+sum;
	}
	max=c[0];
	min=c[0];
	for(t=1;t<k;t++)
	{
		if(c[t]>max)
			max=c[t];
	}
	for(t=1;t<k;t++)
	{
		if(c[t]<min)
			min=c[t];
	}
	for(t=0;t<k;t++)
		if(max==c[t])
		{
	       printf("%s\n",b[t]);
		   break;
		}
	    
	
		for(t=0;t<k;t++)
			if(min==c[t])
			{
				printf("%s\n",b[t]);
		        break;
			}
}

