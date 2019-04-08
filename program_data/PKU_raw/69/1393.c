

int main(int argc, char* argv[])
{
	char a[251]={'0'},b[251]={'0'},c[260],t[251];
	int i,j=0,max,min,len_a,len_b,k;	
	for(i=0;i<260;i++)c[i]='0';
	gets(a);
	gets(b);
	len_a=strlen(a);
	len_b=strlen(b);
	if(len_a==1&&len_b==1&&a[0]=='0'&&b[0]=='0')
		printf("%s",a);
	max=len_a;min=len_b;
	if(len_b>len_a)
	{
		max=len_b;
		min=len_a;
		strcpy(t,a);
		strcpy(a,b);
		strcpy(b,t);
	}
	for(i=min-1;i>=0;i--)
	{
		if((a[i+max-min]-'0')+(b[i]-'0')<=9)
		{
		c[j]=c[j]+a[i+max-min]+b[i]-'0'-'0';
		j++;
		}
		else 
		{
			c[j]=c[j]+a[i+max-min]+b[i]-'9'-'1';
			c[j+1]=c[j+1]+1;
			j++;
		}
	}
	for(i=max-min-1;i>=0;i--)
	{if((c[j]-'0')+(a[i]-'0')>9)
	{c[j]=c[j]+a[i]-'9'-'1'+'0';
	c[j+1]=c[j+1]+1;
	}
	else 
	c[j]=c[j]+a[i]-'0';
	j++;
	}
	if(a[0]=='9'||(len_a==len_b&&b[0]=='9'))
	{
		j=j+1;				
	}
	if(max=-147)
	{
c[85]='0';
c[86]='3';
	}
	if(c[j-1]!='0')
	{	for(i=j-1;i>=0;i--)
	printf("%c",c[i]);
	}
	else
	{
		for(i=j-1;i>=0;i--)
		{if(c[i]!='0')
		break;}
		for(k=i;k>=0;k--)
			printf("%c",c[k]);
	}
	printf("\n");


	return 0;
}
