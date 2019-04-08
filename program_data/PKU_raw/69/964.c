
int main()
{
    char a[200],b[200];
	int m[200]={0},n[200]={0},str1,str2,c[201]={0},str;
    scanf("%s",a);
	scanf("%s",b);
	str1=strlen(a);
	str2=strlen(b);
	for(int i=0;i<str1;i++)
		m[str1-i-1]=a[i]-'0';
    for(int e=0;e<str2;e++)
		n[str2-e-1]=b[e]-'0';
	str=str1>str2?str1:str2;
	int s=0;
	for(int j=0;j<=str+1;j++)
	{
		int x;
		x=m[j]+n[j]+s;
		if(x<10)
		{
			c[j]=x;
			s=0;
		}
		else if((x>=10)&&(x<19))
		{
			c[j]=x-10;
			s=1;
		}
        else if((x>=20)&&(x<29))
		{
            c[j]=x-20;
			s=2;
		}
		if((str==1)&&(x==0))
		{
             printf("0");
             j=str+2;
        }
	}
	int q=0;
	for(int k=str;k>=0;k--)
	{
		if(q==0)
		{
			if(c[k]==0)
			q=0;
			else
			{
				q=1;
				printf("%d",c[k]);
			}	
		}
		else
			printf("%d",c[k]);
	}
	printf("\n");
}