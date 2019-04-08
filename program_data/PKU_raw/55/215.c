

int main()
{
	int a,b,n,i,sum=0,t,r;
	char str1[255],str2[255];
	scanf("%d %s %d",&a,str1,&b);
	n=strlen(str1);
	for(i=0;i<n;i++){
		if(str1[i]>='0'&&str1[i]<='9')
			t=str1[i]-'0';
		else if(str1[i]>='A'&&str1[i]<='Z')
			t=str1[i]-'A'+10;
		else if(str1[i]>='a'&&str1[i]<='z')
			t=str1[i]-'a'+10;
			sum=sum*a+t;
	}
	i=0;
	if (sum==0) printf("0\n");
	else
	{
		while (sum!=0)


		while(sum!=0){
			r=sum%b;
			if(r<10)
				str2[i]=r+'0';
			else if(r>=10)
				str2[i]=r-10+'A';
			sum=sum/b;
			i++;
		}
		str2[i]='\0';
		i=strlen(str2)-1;
		while(str2[i]=='0')
			i--;
		for(;i>=0;i--)
		{
			printf("%c",str2[i]);
		}
		printf("\n");
	}
	return 0;
}
