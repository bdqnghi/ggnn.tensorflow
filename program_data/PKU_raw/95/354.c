
int main()
{
	int i,x=0;
	
	char m[90],n[90];
	gets (m);
	gets (n);
	for(i=0;m[i]!='\0'&&n[i]!='\0';i++)
	{
	if(m[i]>=65&&m[i]<=90)m[i]=m[i]+32;
	if(n[i]>=65&&n[i]<=90)n[i]=n[i]+32;
		if(m[i]>n[i])
		{printf(">");x=1;
			break;
		}
		else if(m[i]<n[i])
		{printf("<");
		x=1;
		break;
		}}
	if(x==0)printf("=");
	return 0;
}

