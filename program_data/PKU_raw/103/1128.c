int main()
{
	int i,m,sum;
	char a[1000];
	gets(a);
    for(i=0;a[i]!='\0';i++)
    {
    	if(a[i]>='a' && a[i]<='z')a[i]=a[i]-'a'+'A';
    }

    for(i=0;a[i]!='\0';i++)
    {
    	sum=0;
    	for(m=i;a[m]==a[i];m++)
    	{
    		sum++;
    	}
    	i=m-1;
    	printf("(%c,%d)",a[i],sum);
    }
}