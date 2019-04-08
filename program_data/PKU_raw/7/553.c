
int main(){
	char a[100],s[100],ex[100],b[100];
	int i,j,k,flag,len,D;
	gets(s);
	gets(a);
	gets(b);
	len=strlen(a);
	for(i=0;s[i]!='\0';i++)
	{
		flag=1;
		if (s[i]==a[0])
		{
			k=i;
			for (j=i;j<i+len;j++)
			{
				ex[j-i]=s[k];
				k++;
			}
	      	for (j=0;j<len;j++)
		    {
		        if (ex[j]!=a[j])
		       		flag=0;
	       	}
		}
        else
            flag=0;

	   	if (flag)
		{
			D=i;
			break;
		}
	}
	if (flag) 
	{
		for(i=0;i<D;i++)
		{
			printf("%c",s[i]);
		}
		for(i=0;b[i]!='\0';i++)
		{
			printf("%c",b[i]);
		}
		for(i=D+len;s[i]!='\0';i++)
		{
			printf("%c",s[i]);
		}
	}
	else
		for(i=0;s[i]!='\0';i++)
		{
			printf("%c",s[i]);
		}
	printf("\n");
	return 0;
}