void main()
{
	char s[500];int a[200]={0},len,n,i,r=0,j,max1=0,max2=0,p;
	gets(s);len=strlen(s);
		for(i=0;i<len;i++)
		{
			if(s[i]==',')r++;
			else a[r]=a[r]*10+s[i]-'0';
		}
		for(j=0;j<=r;j++)
		{
			if(a[j]>max1){max2=max1;max1=a[j];}
			if(a[j]<max1&&a[j]>max2)max2=a[j];
		}
		for(i=1;i<=r;i++){if(a[i]!=a[0])break;}
		if(i==r+1)p=1;
		if(r==0)printf("No");
		else if(p==1)printf("No");
		else printf("%d",max2);
}