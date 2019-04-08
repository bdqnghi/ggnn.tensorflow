int main()
{
	int m,n,i,j,k,num,s[300],b[300],q,w;
	for(i=1;;i++)
	{
    scanf("%d%d",&s[i],&b[i]);
	if(s[i]==0){w=i-1;break;}
    }
	int x[w];

  for(q=1;q<=w;q++)
  {
	int a[s[q]+1];
	for(i=1;i<=s[q];i++)
	{
		a[i]=1;
    }
	j=0;
	k=0;
for(i=1;i<=s[q];i++)
{
	if(a[i]==1)
	{
		j++;
		if(j==b[q])
		{
			a[i]=0;
			j=0;
			k++;
        }
		if(k==s[q])
		{
			x[q]=i;
			break;
        }
    }
	if(i==s[q])
	i=0;
}

  }
  for(q=1;q<=w;q++)
  {printf("%d\n",x[q]);
}

}
