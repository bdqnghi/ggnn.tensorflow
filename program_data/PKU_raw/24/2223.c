int main()
{
	char c[2000]={0},c1[50]={0},c2[20]={0};
	int i=0,j,len=0,max=0,min=100;
	while(1)
	{
		c[i]=getchar();
		if(c[i]!=','&&c[i]!=' '&&c[i]!='\n')
			len++;
		else if(len!=0)
		{
			if(len>max)
			{
				max=len;
				for(j=i-len;j<i;j++)
					c1[j-i+len]=c[j];
			}
			if(len<min)
			{
				min=len;
				for(j=i-len;j<i;j++)
					c2[j-i+len]=c[j];
				c2[j-i+len]=0;
			}
			len=0;
			if(c[i]=='\n') break;
		}
		i++;
	}
	printf("%s\n%s\n",c1,c2);
	return 0;
}
