int main()
{	char ori[num];
	char change[num];
	int m=0,i=0;
	gets(ori);
	m=strlen(ori);
		for(i=0;i<m;i++)
		{	if(i<m-1)
			{	change[i]=ori[i]+ori[i+1];

			}
		else change[i]=ori[i]+ori[0];
		
		}
	for(i=0;i<m;i++)
	printf("%c",change[i]);	
return 0;
}