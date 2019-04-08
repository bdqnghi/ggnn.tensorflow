int main()
{
	char a[256],b[256],c[256];
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
	int lenth1,lenth2,i,j,t;
	lenth1=strlen(a);
	lenth2=strlen(b);
	for(i=0;i<=lenth1-1;i++)
	{
		t=i;
		for(j=0;j<=lenth2-1;)
		{
			
			if(a[t]==b[j])
			{
				t=t+1;
				j=j+1;
				
			}
			else
				break;

		}
		if(j==lenth2)
			break;
	}
	for(j=0;j<lenth2;j++,i++)
		a[i]=c[j];
	for(i=0;i<lenth1;i++)
	printf("%c",a[i]);
}