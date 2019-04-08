int main()
{
	char x[500]={"0"};
	int length,i,j,m,t,w;
	scanf("%s",x);
	length=strlen(x);
	for(i=2;i<=length;i++)
	{
		for(j=0;j+i-1<length;j++)
		{
			m=0;
		    for(t=0;t<i/2;t++)
			{
				if(x[j+t]!=x[i+j-1-t])
				m=1;
			}
			if(m==0)
			{
			    for(w=j;w<=i+j-1;w++)
				{
				    printf("%c",x[w]);
				}
			    printf("\n");
			}
		}
	}
    return 0;
}