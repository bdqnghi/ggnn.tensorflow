void main()
{
	int n,i,j,a[101][101],len1[101],len2;
	char str1[101],str2[101],str3[101],Tempstr2[101]; 
    scanf("%d\n",&n);
	for(j=0;j<n;j++)
	{
		gets(str1);
		gets(str2);
		if(j!=n-1)
			gets(str3);
		len1[j]=strlen(str1);
		len2=strlen(str2);
		for(i=0;i<len1[j]-len2;i++)
			Tempstr2[i]='0';
		for(;i<len1[j];i++)
			Tempstr2[i]=str2[i-(len1[j]-len2)];
		for(i=0;i<len1[j];i++)
			a[j][i]=str1[i]-Tempstr2[i];
		for(i=len1[j]-1;i>=0;i--){
			if(a[j][i]<0){
				a[j][i]+=10;
				a[j][i-1]-=1;
			}
		}
	}
    for(j=0;j<n;j++){
		for(i=0;i<len1[j];i++)
			if(a[j][i]!=0)
				break;
		for(;i<len1[j];i++)
			printf("%d",a[j][i]);
		printf("\n");
	}
}