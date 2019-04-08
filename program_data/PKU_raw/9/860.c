int main()
{
	int n,i,a[100],j=0,c[100],z,r;
	char s[100][10],b[100][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",s[i],&a[i]);
		if(a[i]>=60){
			c[j]=a[i];
			strcpy(b[j],s[i]);
			j++;
		}
	}
	for(z=j-1;z>0;z--)
	{
		for(r=0;r<z;r++)
		{
			if(c[r]<c[r+1]){
				int tep;
				char m[10];
				tep=c[r+1];
				c[r+1]=c[r];
				c[r]=tep;
				strcpy(m,b[r]);
				strcpy(b[r],b[r+1]);
				strcpy(b[r+1],m);
			}
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%s\n",b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<60){
			printf("%s\n",s[i]);
		}
	}
	return 0;
}