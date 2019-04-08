
int main()
{
	char a[251]={'\0'},b[251]={'\0'},c,temp[251],add[252]={'\0'};
	int i,j,k,la,lb;

	scanf("%s",a);
	scanf("%s",b);

	la=strlen(a);
	lb=strlen(b);

	add[0]='0';

	if(la>lb)
	{
		k=la;
		la=lb;
		lb=k;
		strcpy(temp,a);
		strcpy(a,b);
		strcpy(b,temp);
	}
   

	j=lb-1;
    i=la-1;
	
	for(i=la-1;i>=0;i--)
	{

		
		c=a[i]+b[j]-48;
		if(c<='9')
		{	
			add[j+1]=add[j+1]+c;

	        if(add[j+1]>'9')
			{add[j+1]=add[j+1]-10;
           	if(j==0)
            add[j]='1';
			else
				add[j]='1'-48;}}

	
		else
		{
			add[j+1]=add[j+1]+c-10;
			if(j==0)
            add[j]='1';
			else
				add[j]='1'-48;
		}
		j--;
	}

	k=j;
if(lb>la)
	for(j=k;j>=0;j--)

	{	add[j+1]=add[j+1]+b[j];
	if(add[j+1]>'9')
	{add[j+1]=add[j+1]-10;
	if(j==0)
            add[j]='1';
			else
				add[j]='1'-48;}}
	


for(i=0;i<lb+1;i++)
    if(add[i]!='0')
		break;
	if(i!=lb+1)
	{
	     k=i;
		for(i=k;i<lb+1;i++)
			printf("%c",add[i]);
	}
	else
		printf("0");
	
			return 0;
}


