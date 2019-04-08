void main()
{
	char s1[251]={""},s2[251]={""},sum[251]={""},temp[251]={""};
	int i,j,k,r=0,len1,len2,a[251]={0};

	gets(s1);gets(s2);


	len1=strlen(s1);len2=strlen(s2);
	k=len1>len2?len1-1:len2-1;
	for(i=k;i>=0;i--)
	{
		if(k==len1-1)
		{
		if(i-(k-len2+1)>=0)
		  a[i]=(s1[i-(k-len1+1)]-48)+(s2[i-(k-len2+1)]-48);
		else a[i]=s1[i-(k-len1+1)]-48;
		}
	   else
	   {
		if(i-(k-len1+1)>=0)
		  a[i]=(s1[i-(k-len1+1)]-48)+(s2[i-(k-len2+1)]-48);
		else a[i]=s2[i-(k-len2+1)]-48;
	   }
	}
	for(i=k;i>=1;i--)
		if(a[i]>=10){a[i-1]+=a[i]/10;a[i]=a[i]%10;}
	for(i=0;i<=k;i++)
		if(a[i]!=0) {r=i; break;}

    for(i=r;i<=k;i++)  
	printf("%d",a[i]);
	printf("\n");

}