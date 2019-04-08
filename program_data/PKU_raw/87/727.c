int main()
{
	int a,b,c,d,e,f,g,h,i,j,k;
	for(k=0;k<100;k++){
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
	{
		return 0;
	}
		d=d+12;
	g=(d-a)*3600;
	h=(e-b)*60;
	i=(f-c)*1;
	j=g+h+i;
	printf("%d\n",j);
	}
	return 0;
}


