
int main(int argc, char* argv[])
{
	char a[1000];
	int n,i,p,x;
	scanf("%d",&n);
	for (p=1;p<=n;p++)
	{
		scanf("%s",a);
printf("\n");
		for(i=0;a[i]>0;i++)
		{
			if(a[i]==65)
			{
				a[i]=84;
				printf("%c",a[i]);
			}		
			else if(a[i]==84)
			{
				a[i]=65;
				printf("%c",a[i]);
				
			}		
			if(a[i]==71)
			{
				a[i]=67;
				printf("%c",a[i]);
			}
			
			else if(a[i]==67)
			{
				a[i]=71;
				printf("%c",a[i]);
				
			}
			
		}	
	}
	
	
	
	return 0;
}

