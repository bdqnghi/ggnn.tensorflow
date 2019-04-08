int main()
{
	int i,j,s,s1,s2,b,b1,b2,n[50];
	char c,a[1000];
	gets(a);
	for(i=0,j=0;(c=a[i])!='\0';i++)
	{
		if(c==' ')
		{
			n[j]=i; j++;
		}
	}
	n[j]=i;
	b=n[0]+1;s=n[0]+1;
	for(i=0; i<j ; i++)
	{	
		if((n[i+1]-n[i])>b) {b=n[i+1]-n[i];b1=n[i];b2=n[i+1];}		
		if((n[i+1]-n[i])<s) {s=n[i+1]-n[i];s1=n[i];s2=n[i+1];}		
	}
	if (b==n[0]+1)
	{	for(i=0;i<b-1;i++)
	printf("%c", a[i]);}
	else
	{	for(i=b1+1;i<b2;i++)
	printf("%c", a[i]);}
	printf("\n");
	if(s==n[0]+1)
	{   for(i=0;i<s-1;i++)
	printf("%c", a[i]);}
	else 
	{	for(i=s1+1;i<s2;i++)
	printf("%c", a[i]);}
	printf("\n");
	return 0;
}
