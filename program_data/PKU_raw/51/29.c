int com(char str1[],char str2[])
{
	int i,n,l=strlen(str1);
	for(i=0;i<l;i++)
		if(str1[i]!=str2[i])return 0;
    return 1;
}
void main()
{
	int i,j,n,l,k=1,nu[800]={0},m=1,max=0;
	char x[800],p[800][7],tmp[7];
	scanf("%d",&n);
    scanf("%s",x);
	l=strlen(x);
	for(i=0;i<n;i++)
		p[0][i]=x[i];
     nu[0]++;
	for(i=1;i<l-n+1;i++)
	{
		for(j=0;j<n;j++)
			tmp[j]=x[i+j];
		for(j=0;j<k;j++)
			if(com(tmp,p[j])){nu[j]++;m=0;break;}
		if(m==1){strcpy(p[j],tmp);k++;nu[j]++;}
		m=1;
	}
	for(i=0;i<k;i++)
		if(nu[i]>max)max=nu[i];
		if(max==1)printf("NO");
		else
		{printf("%d\n",max);
	for(i=0;i<k;i++)
		if(nu[i]==max)printf("%s\n",p[i]);
		}
}