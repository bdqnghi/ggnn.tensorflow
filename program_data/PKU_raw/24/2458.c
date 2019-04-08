int main()
{
	char str[1001];
	int i,j,s=0,max=0,min=0,begin1,end1,begin2,end2,t;
	gets(str);
	for(t=0;t<strlen(str);t++)
	{
		if(str[t]!=' '&&str[t]!=','&&t!=strlen(str)-1)
			s++;
		else if(t==strlen(str)-1) s++;
		if(str[t]==' '||str[t]==',')
		{
			end1=t-1;end2=t-1;
			begin1=0;begin2=0;
			max=s;min=s;goto p;
		}
		else if(t==strlen(str)-1)
		{
			end1=t;end2=t;
			begin1=0;begin2=0;
			max=s;min=s;goto loop;
		}
	}
p:
	for(i=t;i<strlen(str);i++)
	{
		if(str[i]!=' '&&str[i]!=','&&i!=strlen(str)-1)
			s++;
		else if(i==strlen(str)-1) s++;
		if(str[i]==' '||str[i]==',')
		{
			if(s>max)
			{
				end1=i-1;max=s;
				for(j=end1;;j--)
				{
					if((str[j]!=' '&&str[j]!=',')&&(str[j-1]==' '||str[j-1]==',')) {begin1=j;break;}
				}
			}
			else if(s<min&&s>0)
			{
					end2=i-1;min=s;
				    for(j=end2;;j--)
					{
						if((str[j]!=' '&&str[j]!=',')&&(str[j-1]==' '||str[j-1]==',')) {begin2=j;break;}
					}
			}
			s=0;
		}
		else if(i==strlen(str)-1)
			{
			if(s>max)
			{
				end1=i;max=s;
				for(j=end1;;j--)
				{
					if((str[j]!=' '&&str[j]!=',')&&(str[j-1]==' '||str[j-1]==',')) {begin1=j;break;}
				}
			}
			else if(s<min&&s>0)
			{
					end2=i;min=s;
				    for(j=end2;;j--)
					{
						if((str[j]!=' '&&str[j]!=',')&&(str[j-1]==' '||str[j-1]==',')) {begin2=j;break;}
					}
			}
			s=0;
		}
	}
loop:
	for(i=begin1;i<=end1;i++) printf("%c",str[i]);
	printf("\n");
	for(i=begin2;i<=end2;i++) printf("%c",str[i]);
}