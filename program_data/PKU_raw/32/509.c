
void main()
{   
	int n,la,lb,length,i,s,j;
	char a[100],b[100];
	int aArray[100],bArray[100];
	scanf("%d",&n);
    for(s=1;s<=n;s++)
	{
		scanf("%s",a);
		scanf("%s",b);
		
		la=strlen(a);
		lb=strlen(b);
		length=la-lb;
		
		for(i=0;i<la;i++)
			aArray[i]=a[i]-'0';
		for(i=0;i<length;i++)
	
			bArray[i]=0;

		for(i=length;i<la;i++) 
			bArray[i]=b[i-length]-'0';    
		
		for(i=la-1;i>=0;i--)
		{   
			if(aArray[i]>=bArray[i])a[i]=aArray[i]-bArray[i];
			if(aArray[i]<bArray[i])
			{a[i]=aArray[i]+10-bArray[i];aArray[i-1]--;}
			
			
		}
		
		for(i=0;i<la;i++)
		     a[i]=a[i]+48;
		
		for(i=0;i<la;i++)
		{
			if(a[i]!=0)
	     	for(j=i;j<la;j++)
			printf("%c",a[j]);
			printf("\n");
			break;
		}
	}
}
