

int main(int argc, char* argv[])
{
	int a,b;
	int c1=0,c2=0;
	scanf("%d%d",&a,&b);
	int t[10000],m[10000];
	int i,j;
	if(a==b)
	{
		printf("%d",a);
	}
	else if(a==1||b==1)
	{
		printf("1");
	}
	else 
	{
		t[1]=a;
	for(i=2;a!=1;i++)
	{
		a=a/2;
		t[i]=a;
		c1++;
	
		
	
	}
	m[1]=b;
	for(j=2;b!=1;j++)
	{
		b=b/2;
		m[j]=b;
		c2++;
	
	}
	for(i=1;i<=c1;i++)
	{
		for(j=1;j<=c2;j++)
		{
			if(t[i]==m[j])
				break;
		}
		if(t[i]==m[j])
			break;
	}
		
	
	printf("%d",t[i]);
	}





	return 0;
}
