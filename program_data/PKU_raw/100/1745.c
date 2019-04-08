int main()
{
	char b[301];
	char a[26];
	char A[26];
	scanf("%s",&b);
	int i,j,k,L,t,sb=0;
	    for(j=0;j<26;j++)
		{
			A[j]=0;
			a[j]=0;
		}
		for(i=0;;i++)
		{
			if(b[i]=='\0')
				break;
			else
			{	if(b[i]<='Z'&&b[i]>='A')
				{	t=b[i]-'A';
					A[t]++;
                    sb++;}
				if(b[i]<='z'&&b[i]>='a')
				{	t=b[i]-'a';
				    a[t]++;
                    sb++;}}
		}
		if(sb==0)
		printf("No\n");
		for(k=0;k<26;k++)
		{
			if(A[k]!=0)
			printf("%c=%d\n",'A'+k,A[k]);
		}
		for(L=0;L<26;L++)
		{
			if(a[L]!=0)
			printf("%c=%d\n",'a'+L,a[L]);
		}
	return 0;
}