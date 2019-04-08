int main()
{
	int i,len,s,t=0;
	char a[1000];
	gets(a);
	len=strlen(a);
	s=a[0];
	for(i=0;i<len;i++)
	{
		
		

		if(s==a[i]||s==a[i]+32||s==a[i]-32)
			t++;
		else 
		{
			if(s>'Z')
				printf("(%c,%d)",s-32,t);
			else
					printf("(%c,%d)",s,t);
			s=a[i];
			t=1;
		}
		
	}
	if(s>'Z')
				printf("(%c,%d)",s-32,t);
			else
					printf("(%c,%d)",s,t);

return 0;

}