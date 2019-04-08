
void main()
{
	char str[13],substr[3];
	int i=0,max,j,n,k;

    
for(k=0;k<100;k++)
{
	for(i=0;i<13;i++)
		str[i]='\0';
	
	for(i=0;i<3;i++)
	substr[i]='\0';

	max=0;

	scanf("%s%s",str,substr);

	n=strlen(str);    

	for(i=0;i<n;i++)
		max=(max>str[i])?max:str[i];

	for(i=0;i<n;i++)
		if(str[i]==max) 
		{
			for(j=n-1;j>i;j--)
				str[j+3]=str[j];
			str[i+1]=substr[0];
			str[i+2]=substr[1];
			str[i+3]=substr[2];
			break;
		}


		printf("%s\n",str);
		
}	



}