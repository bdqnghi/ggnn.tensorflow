void main()
{
	char a[250][30],c='a',b[30];
	int i=0,j=0,k=0,l,n,m,x,z,y,d[250],flag;
	while(c!='\n')
	{
		c=getchar();
		if(c!=' '&&c!=','&&c!='\n'){a[i][j]=c;j++;flag=1;}
		if(c==' '&&flag==1||c==','&&flag==1||c=='\n'&&flag==1){a[i][j]='\0';d[i]=j;j=0;i++;flag=0;}	
	}	
     n=i;
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(d[i]>d[j]||d[i]==d[j]&&i<=j)k++;
	    if(k==n)break;
		else k=0;	
	}    
    printf("%s\n",a[i]);
k=0;
 for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(d[i]<d[j]||d[i]==d[j]&&i<=j)k++;
	    if(k==n)break;
		else k=0;	
	}    
    printf("%s\n",a[i]);
}
