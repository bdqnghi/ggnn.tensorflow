int main()
{
	int a, max, sec=-1, i;
	char s;
	scanf("%d", &max);
	for(i=0;i<300;i++)
	{
		scanf("%c", &s);
		if(s=='\n') break;
		scanf("%d", &a);
		if(a>max){sec=max;max=a;} 
		else if(a==max) continue;
		else
		{
		    if(a>sec)
		   {
			 sec=a;
		   }
		}
	}
	if(sec==-1)
	{	
		printf("No");
	}
	else if(max==sec)
	{
		printf("No");
	}
	else
	{
		printf("%d", sec);
	}
	return 0;
}
