void main()
{
	int a,b;
	int d;
	int length;
	char c[20];
	int n[20];
	char result[200];
	int i,k,j;
	int temp1=0;

	scanf("%d%s%d",&a,c,&b);

	for(i=0;c[i]!=0;i++)
	{
		if(c[i]>='a'&&c[i]<='z')
			n[i]=c[i]-'a'+10;
		if(c[i]>='A'&&c[i]<='Z')
			n[i]=c[i]-'A'+10;
		if(c[i]>='0'&&c[i]<='9')
			n[i]=c[i]-'0';
	}
	
	length=i;
	d=0;
	for(k=0;k<length;k++)
	{
		d=d*a+n[k];
	}

	for(i=0;d!=0;i++){
		temp1=d%b;
		d=d/b;
		if(temp1>=10)
			temp1=temp1-10+'A';
		else
			temp1=temp1+'0';
		result[i]=temp1;
	}
	result[i]=0;
	for(j=i-1;j>=0;j--){
		printf("%c",result[j]);
	}
	if(i==0)
		printf("0");
}
