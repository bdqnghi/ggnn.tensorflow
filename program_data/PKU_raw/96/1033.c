int main()
{
	char c[100];
	int q[100];
	int i=1,j=0,a,r,r1;
	int num(char c);
	scanf("%s",c);
	r=num(c[0]);
	if(c[1]==0)
	{
		a=0;
		printf("%d",a);
	}
	else
	{
	for(j=0;;j++)
	{
		a=r*10+num(c[i]);
		if(a>=13)
		{
			q[j]=a/13;
			r=a%13;
			i=i+1;
		}
		else
		{
			if(j!=0&&c[i+1]!='\0')
			{q[j]=0;
			j++;}
			if(c[i+1]=='\0')
			{
				q[j]=0;
				r=a;
				break;
			}
			a=r*100+num(c[i])*10+num(c[i+1]);
			q[j]=a/13;
			r=a%13;
			i=i+2;
			
		}
		if(c[i]=='\0')
			break;
	}
	for(i=0;i<=j;i++)
		printf("%d",q[i]);
	}
	printf("\n");
	printf("%d\n",r);
	return 0;
}

int num(char c)
{
	int y;
	y=c-'0';
	return y;
}