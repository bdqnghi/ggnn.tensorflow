int main(int argc, char* argv[])
{
	int num=0,i,l,j,k,n,left[101];
	char str[101],str2[101];
	while(gets(str))
	{
		strcpy(str2,str);
		for(i=0,l=0;str[i];i++)
		{
			if(str[i]=='(')
			{
				left[l]=i;l++;
			}
		}
		for(n=l-1;n>=0;n--)
		{
			for(k=left[n]+1;str[k];k++)
			{
				if(str2[k]==')')
				{
					str2[left[n]]=' ';str2[k]=' ';break;
				}
			}
		}
		for(j=0;str[j];j++)
		{
			if(str2[j]=='(')str2[j]='$';
			else if(str2[j]==')')str2[j]='?';
			else str2[j]=' ';
		}
		printf("%s\n",str);
		printf("%s\n",str2);
	}
	return 0;
}