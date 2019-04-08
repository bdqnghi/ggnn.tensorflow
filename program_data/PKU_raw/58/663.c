int First(char i)
{
	if((i!='_')&&((i<65)||((i>90)&&(i<97))||(i>122)))
		return 0;
	else return 1;
}
int Rest(char i)
{
		if((i!='_')&&((i<48)||((i>57)&&(i<65))||((i>90)&&(i<97))||(i>122)))
		return 0;
	else return 1;
}



int main()
{
	int n,i,j,flag;
	char str[81];
	scanf("%d\n",&n);
	
	for(i=0;i<n;i++)
	{
	    gets(str);
		flag=1;
		if((First(str[0]))!=0)
		{
			
			for(j=1;str[j]!='\0';j++)
			{
			    
				if((Rest(str[j]))!=0) flag=1;
				else 
				{
					flag=0;
					break;
				}
			}
		}
		else
		{
			flag=0;
		
		}	
	if(flag==1) printf("1\n");
    else printf("0\n");
	}

	return 0;
}