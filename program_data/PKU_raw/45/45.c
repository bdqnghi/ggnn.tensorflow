int main(){
	int c;
	char a[51],b[51];
	scanf("%s %s",a,b);
	for(int i=0;b[i]!='\0';i++)
	{
		if(a[0]==b[i])
		{
			c=i;
			break;
		}
	}
	printf("%d",c);
	return 0;
}