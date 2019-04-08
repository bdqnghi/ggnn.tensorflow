int main()
{
	int a[100],b[100],c[100],d[100],e[100],f[100],s1,s2,s,i,k=0;
	for(i=0;;i++)
	{
		scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		k++;
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0)
			break;
	}
	for(i=0;i<k-1;i++)
	{
		s1=a[i]*3600+b[i]*60+c[i];
	    s2=(d[i]+12)*3600+e[i]*60+f[i];
	    s=s2-s1;
	    printf("%d\n",s);
	}
	return 0;
}