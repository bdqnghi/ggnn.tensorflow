void AddBigInt(char *result,char *str1,char *str2)
{
	int i,j,k,a,b,c;
	int x=0;		
	char c1,c2;
    for(i=0;;i++)		
	{
		if(*(str1+i)=='\0')
		{
			a=i-1;
			break;
		}
	}
	for(i=0;;i++)
	{
		if(*(str2+i)=='\0')
		{
			b=i-1;
			break;
		}
	}
	if(a>b)		
		c=a+1;
	else
		c=b+1;
	*(result+c+1)='\0';	
	for(i=0;c>=i;i++)	
	{						
		if(a<i)
			c1='0';	
		else
			c1=*(str1+a-i);

		if(b<i)
			c2='0';
		else
			c2=*(str2+b-i); 
			*(result+c-i)=(c1-'0'+c2-'0'+x)%10+'0';
		x=(c1-'0'+c2-'0'+x)/10 ;
	}
	if(*result=='0')			
	{				
		for(i=0;*(result+i);i++)
			*(result+i)=*(result+i+1);
	}
}
int main()
{
    int i;
	char str1[251],str2[251],result[251];
	gets(str1);
	gets(str2);
	AddBigInt(result,str1,str2);
	int index = 0;
    for (i = 0; i < strlen(result);i ++) {
        if ('0' != result[i]) {
            index = i;
            break;
        }
    }
    
    char k[250];
    strcpy(k, result+ index);
    printf("%s\n",k);
	return 0;
}