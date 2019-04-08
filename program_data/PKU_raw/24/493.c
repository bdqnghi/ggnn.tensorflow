int main ()
{
	char a[100];
	int count=0,b=-1,v=87787;
	gets(a);
	char max[100],min[100],t[100];
	int n=strlen(a);
	a[n]=' ';
	





	for (int i=0;i<=n;i++)
	{
		if (a[i]!=' ')
		{
			t[count]=a[i];
			count++;
		}
		else {
			t[count]='\0';
			if (count<v)
			{
				v=count;
				strcpy(min,t);
			}
			if(count>b)
			{
				b=count;
				strcpy(max,t);
			}
			count=0;
		}
	}
	printf("%s\n%s\n",max,min);
	return 0;
}	





	










		

	



	
		
    




			

	


