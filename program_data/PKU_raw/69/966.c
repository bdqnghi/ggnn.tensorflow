void main()
{
	int i,j,k,a[201]={0},b[200]={0},len,flag=0;
	char str1[201],str2[201];

	scanf("%s",str1);
	scanf("%s",str2);

	if(strlen(str1)==1&&strlen(str2)==1&&str1[0]=='0'&&str2[0]=='0')
		printf("0\n");
	else{

	for(i=0;i<strlen(str1);i++)
		a[strlen(str1)-i-1]=str1[i]-'0';
	for(j=0;j<strlen(str2);j++)
		b[strlen(str2)-j-1]=str2[j]-'0';

	len=(strlen(str1)>strlen(str2))?strlen(str1):strlen(str2);

	for(i=0;i<len;i++){
		a[i]+=b[i];
	if(a[i]>=10){
		a[i]-=10;
		a[i+1]++;
	}
	}
	
	for(k=len;k>=0;k--){
		if(flag)
			printf("%d",a[k]);
		else if(a[k]){
			printf("%d",a[k]);
			flag=1;
		}
	}
	printf("\n");
}
}


