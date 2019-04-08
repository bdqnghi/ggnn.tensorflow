
int main()
{
	int b[100],j=2,i,e,c[100],p;
	char a[100];
	
	
	scanf("%s",a);
	
	p=strlen(a);
	if(p==1)
	{printf("0\n");
	printf("%d",a[0]-'0');
    }
    else
    {
	b[0]=(a[0]-'0')*10+a[1]-'0';
 
    while(a[j]!=0)
	{
	b[j-1]=a[j]-'0';
	
	j++;
	}
	j-=2;
    
    for(i=0;i<j;i++)
    {
                
	c[i]=b[i]/13;
	e=b[i]%13;
	b[i+1]+=e*10;    
		
	}
	c[j]=b[j]/13;
	e=b[j]%13;
	
	if(j==0)
	printf("%d\n",c[0]);
	else 
    {
         if(c[0]!=0)
    printf("%d",c[0]);
	i=1;
	while(i<j)
	{
	printf("%d",c[i]);
    i++;
    }
	
    printf("%d\n",c[j]);
}
            
	printf("%d",e);
}
	
}