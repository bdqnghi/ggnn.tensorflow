void main()
{
	int n,i,j,*p1,*p2,*p3,x[100],y[100],z[100]; 
	char str1[100][100],str2[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        scanf("\n");
		gets(str1[i]);
		gets(str2[i]);
		
	}
	for(i=0;i<n;i++)
	{	
		p1=x;p2=y;
		for(j=0;j<strlen(str1[i]);j++,p1++)
			*p1=str1[i][j]-'0';
		for(j=0;j<strlen(str2[i]);j++,p2++)
			*p2=str2[i][j]-'0';	
		for(p1=p1-1,p2=p2-1,p3=z;p2>=y;p1--,p2--,p3++)
		{
			if(*p1>=*p2)
				*p3=*p1-*p2;
			else
			{
				*p3=(*p1+10)-*p2;
				for(j=1;;j++)
			    	if(*(p1-j)>0)break;
				*(p1-j)=*(p1-j)-1;
				if(j>1)
				{
					for(j=j-1;j>0;j--)
					  *(p1-j)=9;
				}
			}
		}
		for(;p1>=x;p1--,p3++)
			*p3=*p1;
		for(p3=p3-1;p3>=z;p3--)
			printf("%d",*p3);
		printf("\n");
	}
}


