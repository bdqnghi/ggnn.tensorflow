int main()
{
	int i=0,k,t,j=0;
	char c;
int s[3000];
while(scanf("%d",&s[i]))
{
c=getchar();
if(c=='\n') break;
i++;
}
if(i==0)
printf("No");
else
{for(k=0;k<i;k++)
{
    for(j=0;j<i-k;j++)
	{
	if(s[j]>s[j+1])
	{
		t=s[j];
		s[j]=s[j+1];
		s[j+1]=t;
	}
	}
}
for(k=i;k>0;k--)
{
	if(s[k]>s[k-1])
		break;
else if(s[k]==s[k-1])
		continue;
}
if(s[k-1]==0)
{printf("No");}
else
printf("%d",s[k-1]);
	return 0;
}
}

