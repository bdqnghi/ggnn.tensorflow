int main() 
{ 
	char a[50],b[50]; 
	int i=0,j,p; 
	int flag=1; 
	scanf("%s",b); 
	printf(" ");
	scanf("%s",a);
	printf("\n"); 
	while(a[i] && flag) 
	{ 
		p=i; 
		j=0; 
		while(a[i]&&b[j]&&a[i]==b[j]) 
		{
			i++;j++;} 
		if(!(b[j])) 
		flag=0; 
		else 
		i=p+1; 

		} 
		if(!flag) 
		printf("%d\n",p); 

		return 0;
} 