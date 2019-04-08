int main(int argc, char* argv[])
{
    int a[50],i,z1,z2,n;
    long x,z;
    char s1[3],s2[50],s3[3],s[50];
	scanf("%s %s %s",s1,s2,s3);
    z1=atoi(s1);z2=atoi(s3);z=1;x=0;
         n=strlen(s2);
	for (i=0;i<n;i++)
		if ((s2[i]>='A')&&(s2[i]<='Z')) s2[i]=s2[i]+32;

    for (i=0;i<n;i++)
	{
        if (s2[i]<='9') a[i]=s2[i]-'0';
        else a[i]=s2[i]-'a'+10;
    }
	for (i=n-1;i>=0;i--)
	{
		x=x+a[i]*z;
		z=z*z1;
	}
	i=0;
	while (x!=0)
	{
		a[i]=x%z2;
		i++;
		x=(x-x%z2)/z2;
	}
	if (i==0) printf("0");
	else
	{
	n=i-1;
	for (i=n;i>=0;i--)
                   if (a[i]<10) s[n-i]='0'+a[i];
		else	s[n-i]='A'+a[i]-10;
        s[n+1]='\0'; 
		puts(s);
	}
	return 0;
}
