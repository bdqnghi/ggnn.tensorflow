int main(int argc, char* argv[])
{
	int n,i,j,k,a,b,carry;
	char str1[100],str2[100],str3[100]={'\0'};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		a=strlen(str3);
		for(j=0;j<a;j++)
		{
			str3[j]='\0';
		}
		scanf("%s",&str1);
		scanf("%s",&str2);
	
	    a=strlen(str1);
	    b=strlen(str2);
		carry=0;
		for(j=a-1,k=b-1;j>a-b-1;j--,k--)
		{
           str3[j]=str1[j]-str2[k]+'0'-carry;
		   if(str3[j]-'0'<0)
		   {
			   carry=1;
			   str3[j]+=10;
		   }
		   else
			   carry=0;
        }
		for(j=a-b-1;j>=0;j--)
		{
			str3[j]=str1[j]-carry;
			if(str3[j]-'0'<0)
		   {
			   carry=1;
			   str3[j]+=10;
		   }
			else
				carry=0;
		}
		if(str3[0]=='0')
		{
			for(j=0;j<a;j++)
			{
				str3[j]=str3[j+1];
			}
		}
		printf("%s",str3);
		if(i!=n-1)
			printf("\n");
	}
	return 0;
}

