
void fan(char a[]);

int b[6]={0};
int i,j=0;

void main()
{
	char s[100];

	while(j<6)
	{
	fan(s);
	j++;
	}

    for(i=0;i<6;i++)
	{
		printf("%d",b[i]);		    
			printf("\n");
		}

}

void fan(char a[])
{
	
	int n,i;

scanf("%s",a);

n=strlen(a);


	for(i=0;i<n;i++)
		if(a[0]!='-') 	for(i=0;i<n;i++) b[j]=b[j]*10+a[n-i-1]-48;
		else 	for(i=1;i<n;i++) b[j]=b[j]*10-(a[n-i]-48);



	


}