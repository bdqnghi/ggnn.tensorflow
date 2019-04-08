void minus(char a[],char b[]);
void main()
{
	int n,i;
	char a[max][max],b[max][max];
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s\n%s\n\n",a[i],b[i]);
		minus(a[i],b[i]);       
        printf("%s\n",a[i]);
	}
}

void minus(char a[],char b[])
{ 
	int la,lb,i,t,j,s,c,k=0;
    la=strlen(a)-1;
    lb=strlen(b)-1;
	for(i=la-lb;i<=la;i++)
	{
		s=a[i];
		c=b[k];
		a[i]=s-c+48;
		t=i;
		while(a[i]<'0')
		{
			a[i]+=10;
			a[--i]--;
		}
		i=t;
		k++;
	}
	i=0;
	while(a[i]=='0')
	{
		for(j=0;j<=strlen(a);)
		{
			a[j]=a[++j];
		}
		i++;
	}
}
