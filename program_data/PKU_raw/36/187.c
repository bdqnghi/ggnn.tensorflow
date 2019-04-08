int length;
int tj(char str[],char x)
{	int i,count=0;
	for(i=0;i<length;i++)
		if(x==str[i]) count++;
	return(count);
}
void main()
{	int i,p=1;
    char a[100],b[100];
	scanf("%s %s",a,b);
	if(strlen(a)!=strlen(b)) p=0;
	else
	{length=strlen(a);
	for(i=0;i<length;i++)
		if(tj(a,a[i])!=tj(b,a[i]))
		{p=0;break;
		}
	}
	if(p==1) printf("YES\n");
	else printf("NO\n");
}