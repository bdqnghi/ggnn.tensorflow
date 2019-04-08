main()
{
	char a[50],b[50];
	int x,y,c;
    scanf("%s%s",a,b);
	x=strlen(a);
	y=strlen(b);
	for(int i=0;i<y;i++)
	{
		if(a[0]-'0'==b[i]-'0')
		{	
			printf("%d",i);
			break;
			for(int j=0;j<x;j++)
			{
				if(a[j+1]-'0'==b[i+j+1]-'0')continue;
				else {c=0; break;}
			}

		}
		else continue;
	}
}