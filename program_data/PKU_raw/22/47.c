void main()
{
	char s[300];
	int a[300]={0},i,t,n=0,k=0,max,b=0,f;
	scanf("%s",s);
	for (i=0;i<strlen(s);i++)
		if (b==0)
		if (s[i]!='-') { b=1;t=s[i]-48;f=1;}
		else {b=1;t=48-s[++i];f=-1;}
		else if (s[i]==',') 
		{
			b=0;a[n]=t;n++;t=0;
		}
		else t=t*10+f*(s[i]-48);
	a[n]=t;
	n++;
	max=a[0];
	for (i=1;i<n;i++)
		if (a[i]>max) max=a[i];
	k=max+1;
	for (i=0;i<n;i++)
		if (a[i]<max)
			if (k>max) k=a[i];
			else if (a[i]>k) k=a[i];
	if (k>max) printf("No");
	else printf("%d",k);
}