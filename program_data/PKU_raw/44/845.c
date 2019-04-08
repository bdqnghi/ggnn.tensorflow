void reverse(char a[100])
{
	int i,j,m,t,n;m=strlen(a);n=m/2;
    
	if(a[0]==45)
	{
		for(i=1;i<n+1;i++)
		{  t=a[i];a[i]=a[m-i];a[m-i]=t;
		
	}printf("%c",a[0]);
		for(i=1;i<m;i++)
		{if(a[i]!='0')
		{printf("%c",a[i]);break;}
		else continue;
		}
		for(i=i+1;i<m;i++)
		{
		printf("%c",a[i]);
		}
		printf("\n");
	}
    else
	{
		for(i=0;i<n;i++)
	{
		t=a[i];a[i]=a[m-i-1];a[m-i-1]=t;
	}
		for(i=0;i<m;i++)
		{if(a[i]!='0')
		{printf("%c",a[i]);break;}
		else continue;
		}
		for(i=i+1;i<m;i++)
		{
		printf("%c",a[i]);
		}
		printf("\n");
	}
}
void main()
{
	char a[100];
	int i,j,k,t,m;
	for(k=0;k<6;k++)
	{
     scanf("%s\n",a);
	 reverse(a);
	}
}