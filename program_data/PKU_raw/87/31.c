int main()
{
	int f[6];
	int i,j,m,n;
	for(i=0;;i++)
	{
		for(j=0;j<6;j++)
		{
			scanf("%d",&f[j]);
		}
		if(f[0]==f[1]&&f[1]==f[2]&&f[2]==f[3]&&f[3]==f[4]&&f[4]==f[5]&&f[5]==0)
		{
			break;
		}
		else
		{
			m=f[0]*3600+f[1]*60+f[2];
			n=(f[3]+12)*3600+f[4]*60+f[5];
			printf("%d\n",n-m);
		}
	}
	return 0;
}