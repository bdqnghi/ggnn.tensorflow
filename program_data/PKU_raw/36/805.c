
void main()
{   
	int  i,j,n=0,temp1,temp2;
	char c1[100],c2[100];
	scanf("%s",c1);
	scanf("%s",c2);

	if(strlen(c1)!=strlen(c2))
	{
		printf("NO");
	}

	else
	{
		for(i=0;i<strlen(c1)-1;i++)
		{
			for(j=0;j<strlen(c1)-1-i;j++)
			{
				if(c1[j]>c1[j+1])
				{
					temp1=c1[j];
				    c1[j]=c1[j+1];
				    c1[j+1]=temp1;
				}
			}
		}
		for(i=0;i<strlen(c2)-1;i++)
		{
			for(j=0;j<strlen(c2)-1-i;j++)
			{
				if(c2[j]>c2[j+1])
				{
					temp2=c2[j];
				    c2[j]=c2[j+1];
				    c2[j+1]=temp2;
				}
			}
		}
		
		for(i=0;i<strlen(c1);i++)
		{
			if(c1[i]==c2[i])
			{
				n++;
			}
			
		}
		if(n==strlen(c1))
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}


	}
}

