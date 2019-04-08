int main()
{
	int i=1,s[10000];
	scanf("%d",&s[1]);
	if(s[1]==1)
	{
		printf("End");
	}
	else
	{
	    while(s[i]!=1)
		{
		     if(s[i]%2==0)
			 {
				 s[i+1]=s[i]/2;
			    printf("%d/2=%d\n",s[i],s[i+1]);
			 }
			 else
			 {
				 s[i+1]=s[i]*3+1;
				 printf("%d*3+1=%d\n",s[i],s[i+1]);
			 }
			 i++;
		}
		printf("End");
	}
	return 0;
}
