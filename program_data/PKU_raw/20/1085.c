int main()
{
	char str[11],substr[4],s[15];
	int i,j,max,l,num;
	while(scanf("%s%s",str,substr)+1)
	{
		max=0;
		l=strlen(str);
		for(i=0;i<l;i++)
		{
			if(str[i]>max)
			{
				max=str[i];
			    num=i;
			}
		  }	
			for(j=0;j<=num;j++)
			{
				s[j]=str[j];
			}
			s[num+1]=substr[0];
			s[num+2]=substr[1];
			s[num+3]=substr[2];
			int n=num;
			for(j=num+4;j<=l+3;j++)
			{   
			    n++;
				s[j]=str[n];
			}
			for(j=0;j<l+3;j++)
			{
				printf("%c",s[j]);
			}
			printf("\n");
	}
}
