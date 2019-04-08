void main(){
	char a[5];
	int i;
	for(i=0;i<=5;i++)
	{
		scanf("%c",&a[i]);
		if((int)(a[i])==10)
			break;
	}
	for(;i>=1;i--)
	{
		printf("%c",a[i-1]);
	}	
}