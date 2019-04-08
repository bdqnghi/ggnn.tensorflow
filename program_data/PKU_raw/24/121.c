void main()
{
	char str [1000],c,string[200],st[100];
	int a[500],i,j,n,d,sum,k,x,y;
	gets(str);
	n=0;
	i=0;
	for (i=0;i<50;i++)
		a[i]=0;
 for(i=0;(c=str[i])!='\0';i++)
 {
		if ((c=str[i])!=' ')
        a[n]=a[n]+1;
        else 
			n++;
 }
	while ((c=str[i])!='\0');
	d=a[0];
	for (i=0;i<=n;i++)
	if (d<a[i])
	{
		d=a[i];
	j=i;
	}
	sum=0;
	if (j!=0)
	{
	k=0;
	for (i=0;i<j;i++)
	{
		if (a[i]==0)
		{
			sum=sum+1;
			k++;
		}
		else
		sum=sum+a[i];
	}
 sum=sum+j-k;
	}
 
   for (i=sum;i<=sum+d;i++)
	 string [i-sum]=str[i] ;
 string[d]='\0';
 puts(string);
 
y=0;
for (i=1;i<d;i++)
{
	for (j=0;j<=n;j++)
		if (a[j]==i)
		{
			x=j;
			y=i;
			break;
		}
		if(y!=0)
			break;
}
 sum=0;
if (x!=0)
{
	k=0;
	for (i=0;i<x;i++)
	{
		if (a[i]==0)
		{
			sum=sum+1;
			k++;
		}
		else
		sum=sum+a[i];
	}
 sum=sum+x-k;
}
 for (i=sum;i<=sum+ y;i++)
	 st [i-sum]=str[i] ;
 st[y]='\0';
 puts(st );
 
}


