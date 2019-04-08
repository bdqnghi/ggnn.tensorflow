int main()
{
	int b[60]={0};
	char a[300];
	char *p=a;
	scanf("%s",a);
	for(;*p!='\0';p++)
	{
		for(int o=65;o<=90;o++){
			if(*p==o) b[o-65]++;
		}
        for(int q=97;q<=122;q++){
			if(*p==q) b[q-71]++;
        }
	}
	int i,n=0;
	char g[60]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",*s;
	s=g;
	for(i=0;i<52;i++,s++)
	{
		char v;
		v=*s;
		if(b[i]!=0)
		{
			printf("%c=%d\n",v,b[i]);
			n++;
		}

	}
	if(n==0)
        printf("No\n");
	return 0;
}
 

