int main(){
	double a,j=0,m,k=0,l=0;
	int o=0,i;
	char b[500],c[500];			
	scanf("%lf%s%s",&a,b,c);
	for(i=0;b[i]!='\0';i++)
	{
		k++;
	}
		for(i=0;c[i]!='\0';i++)
	{
		l++;
	}
		for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==c[i])
		{
			j++;
		}
	}
	m=j/k;
		for(i=0;b[i]!='\0';i++)
		{
			if((b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')||(c[i]!='A'&&c[i]!='T'&&c[i]!='C'&&c[i]!='G'))
			{
				o++;
			}
	}
		if(o>0||k!=l)
		{
			printf("error");
		}
	else if(m>=a)
	{
		printf("yes");
	}
	else 
	{
		printf("no");
	}
	return 0;
}