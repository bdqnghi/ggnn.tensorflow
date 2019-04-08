int main()
{
	char a[100],c,str[100],substr[100],x;
	int i,j,k,s,t;
	while(gets(a))
	{
		for(i=0;(c=a[i])!=' ';i++)
			str[i]=a[i];
		s=i+1;
		k=0;
		for(j=s;(c=a[j])!='\0';j++)
		{
			substr[k]=a[j];
			k++;
		}
		x=str[0];
		for(i=0;i<s-1;i++)
			if(str[i]>x)
			{
				t=i+1;
				x=str[i];
			}
			for(i=0;i<t;i++)
				printf("%c",str[i]);
			for(j=0;j<3;j++)
				printf("%c",substr[j]);
			for(i=t;i<s-1;i++)
				printf("%c",str[i]);
			printf("\n");
	}
			return 0;
}