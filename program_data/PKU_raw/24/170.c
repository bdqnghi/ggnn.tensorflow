void main()
{
	int n,i,j,num,m,k,l,c[1000]={0},max,min;
	char s1[2000]={0},s2[2000]={0};
	gets(s1);
	n=strlen(s1);
	for(i=0;i<n;i++)
		s2[i]=s1[i];
	for(i=0;i<n;i++)
for(i=0;i<n;i++)
	{
		if((s1[i]>=65&&s1[i]<=90)||(s1[i]>=97&&s1[i]<=122))
		{
			s1[i]=0;
			k=1;
		}
		else 
		{
			c[i]=0;
            k=0;
		}
		if(k!=0)
		{
			for(m=i+1,num=1;m<n;m++)
		{
			if((s1[m]>=65&&s1[m]<=90)||(s1[m]>=97&&s1[m]<=122))
		{
			s1[m]=0;
			num++;
		}
			else break;
		}
		}
		if(k!=0)c[i]=num;
}
for(i=1,max=c[0];i<1000;i++)
{
	if(c[i]>max)
	{
		max=c[i];
		k=i;
	}
}
for(i=k;i<n;i++)
{
	if((s2[i]>=65&&s2[i]<=90)||(s2[i]>=97&&s2[i]<=122))
		printf("%c",s2[i]);
	else break;
}
printf("\n");
for(i=1,min=c[0],l=0;i<1000;i++)
{
	if(c[i]<min&&c[i]!=0)
	{
		min=c[i];
		l=i;
	}
}

for(i=l;i<n;i++)
{
	if((s2[i]>=65&&s2[i]<=90)||(s2[i]>=97&&s2[i]<=122))
		printf("%c",s2[i]);
	else break;
}
}