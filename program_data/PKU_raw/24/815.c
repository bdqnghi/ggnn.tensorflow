void main()
{
	int l,i,m=0,j,max,min,k=0,x=0,y=0,b[1000];
	char a[1000];char *p=a;char *q[50];
	gets(a);
	l=strlen(a);
	q[0]=&a[0];
		for(j=0;j<=l;j++)
		{
		    if(a[j]!=' '&&a[j]!='\0')
			 m++;
		    if(a[j]==' '||a[j]=='\0')
			{
			  a[j]='\0';
			   b[k]=m;
			   q[k+1]=&a[j+1];
			   m=0;
			   k++;			  			   
			}
		} 			
	max=b[0];min=b[0];
	for(i=1;i<k;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
            x=i;
		}
		if(b[i]<min)
		{
			min=b[i];
			y=i;
		}
	}	
	printf("%s\n",q[x]);
		printf("%s\n",q[y]);
}



	