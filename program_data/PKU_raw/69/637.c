

void add(int a1[],int a2[],int b[],int a3[],int i)
{
	if(i==0){
		a3[i]=a1[i]+a2[i];
		if(a3[i]>=10){
			b[i]=1;
			a3[i]-=10;
		}
	}
	else{
		a3[i]=a1[i]+a2[i]+b[i-1];
		if(a3[i]>=10){
			b[i]=1;
			a3[i]-=10;
		}
	}
}

void main()
{
	char s1[MAX],s2[MAX];
	int a1[MAX-1]={0},a2[MAX-1]={0},b[MAX-1]={0},a3[MAX-1]={0},len1,len2,i,j;

	gets(s1);
	gets(s2);
	len1=strlen(s1);
	for(i=0;i<len1;i++)
		a1[i]=s1[len1-1-i]-48;
	len2=strlen(s2);
	for(i=0;i<len2;i++)
		a2[i]=s2[len2-1-i]-48;

	len1=(len1>len2)?len1:len2;
	for(i=0;i<=len1;i++){
		add(a1,a2,b,a3,i);
	}

	for(i=MAX-2;i>=0;i--){
		if(a3[i]!=0){
			break;
		}
	}

	if(i==-1)
		putchar('0');
	else{
		for(j=i;j>=0;j--)
			printf("%d",a3[j]);
	}
	printf("\n");
}