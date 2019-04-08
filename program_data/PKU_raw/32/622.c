void main()
{
	int p,i,k,l,n,q,d,j;
	char s1[101],s2[101],re[101][101];
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%s",s1,s2);
		k=strlen(s1);
		d=k;
		l=strlen(s2);
		for(;l>0;l--)
		{
			if(s1[k-1]>=s2[l-1])
			{
				p=s1[k-1]-s2[l-1];
			    s1[k-1]=p+48;
			}
			else
			{
				for(q=k-2;s1[q]=='0';q--)
				{
                  s1[q]='9';

				}
				s1[q]=s1[q]-1;
				p=10+(s1[k-1]-s2[l-1]);
				s1[k-1]=p+48;
			}
			k=k-1;
		}
		for(q=0;q<d;q++)
		{
			if(s1[q]!=0)
			{
				re[i][0]=s1[q];
				break;
			}
		}
		q=q+1;
		for(j=1;q<d;q++)
		{	re[i][j]=s1[q];
		j++;}
		re[i][j]='\0';

	}
	for(i=0;i<n;i++)
		printf("%s\n",re[i]);
	

}