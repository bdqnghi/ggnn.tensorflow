


int strplus(char *strin1,char*strin2,char *strout);



int main()

{

	char a[251],b[251],c[252];

	int i;

	scanf("%s",&(a[1]));

	scanf("%s",&(b[1]));
	if (a[1]=='0'&&b[1]=='0'&&a[2]==0&&b[2]==0)
	{
		printf("0");
		return 0;
	}

	a[0]=b[0]=c[0]='0';

	strplus(a,b,c);

    for (i=0;c[i]=='0';i++);

	printf("%s",c+i);

	return 0;

}



int strplus(char *strin1,char*strin2,char *strout)

{

	int strlen1,strlen2,strlen3;

	int i,j,k;

	int temp,carry=0;



	i=strlen1=strlen(strin1);

	j=strlen2=strlen(strin2);

	k=strlen3=(strlen1>strlen2?strlen1:strlen2);

	strout[strlen3]=0;

	while (1)

	{

    	if (!i&&!j) break;

		if (i) i--;

		if (j) j--;

		k--;

		temp=strin1[i]-'0'+strin2[j]-'0'+carry;

		carry=temp/10;

		strout[k]=temp%10+'0';



	}
return 0;
}
