int main(){
	int a[1000],b[1000],c[1000],d[1000],e[1000],f[1000],i,k,s[1000]={0};
	for(i=0;;i++)
	{
		scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if((a[i]==0)&&(b[i]==0)&&(c[i]==0)&&(d[i]==0)&&(e[i]==0)&&(f[i]==0))
		{
			break;
		}
	}
	for(k=0;k<i;k++)
	{
		if(f[k]<c[k])
		{
			s[k]+=f[k]+60-c[k];
			e[k]--;
		}
		else
		{
			s[k]+=f[k]-c[k];
		}
		if(e[k]<b[k])
		{
			s[k]+=(e[k]+60-b[k])*60;
			d[k]--;
		}
		else
		{
			s[k]+=(e[k]-b[k])*60;
		}
		s[k]+=(d[k]+12-a[k])*3600;
		printf("%d\n",s[k]);
	}
	return 0;
}