int str2(char*str,int*a)
{
	int length=(int)strlen(str);
	int i;
	for(i=0;i<length;i++)
		a[length-i-1]=str[i]-'0';
	return length;
}
void print_b(int*a,int length)
{
	int t=length-1;
	int i;
	while(a[t]==0 && t>0)
		t--;
	for(i=t;i>=0;i--)
		printf("%d",a[i]);
}
int sub_b(int*a,int alength,int*b,int blength,int*c)
{
	int i;
	for(i=0;i<alength;i++)
	{
		c[i]=a[i];
		if(i<blength)
			c[i]-=b[i];
	}
	for(i=0;i<alength;i++)
		if(c[i]<0)
		{
			c[i+1]--;
			c[i]+=10;
		}
	return c[alength-1]?alength:(alength-1);
}
void main()
{
	char s1[M],s2[M];
	int a[M],b[M],c[M];
	int alength,blength,clength;
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %s",s1,s2);
	    alength=str2(s1,a);
	    blength=str2(s2,b);
	    clength=sub_b(a,alength,b,blength,c);
	    print_b(c,clength);
	    printf("\n");
	}
}


