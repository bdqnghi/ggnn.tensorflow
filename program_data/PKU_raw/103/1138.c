struct yasuo
{
	char d;
	int m;
}b[1010];
int main()
{
	int n,i,k=0;
	char a[1010];
	gets(a);
	n=strlen(a);
	for(i=0;i<=n-1;i++)
         {         
                   if(a[i]>=97)
                       a[i]=a[i]-32; 
          }
	for (i=0;i<=n-1;i++)
	{
		b[k].d=a[i];
		b[k].m=1;
		while(a[i+1]==a[i])
		{
			b[k].m++;
			i++;
		}
		k++;
	}
	for(i=0;i<=k-1;i++)
	{
	    printf("(%c,%d)",b[i].d,b[i].m);
	}
	return 0;
}
