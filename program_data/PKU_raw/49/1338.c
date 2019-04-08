
int ishuiwen(char p[],int x)
{
	int j,result=0;
	char q[505]={""};
	for(j=0;j<x;j++)
		q[j]=p[x-j-1];
    if(strcmp(p,q)==0)
		result=1;
	return result;
}

int main()
{
	char a[505],b[505]={""};
	int i,len,j,k;
	gets(a);
	len=strlen(a);
    for(i=2;i<=len;i++)
		for(j=0;j<len+1-i;j++)
		{
			for(k=0;k<i;k++)
				b[k]=a[k+j];
			if(ishuiwen(b,i))
				printf("%s\n",b);
		}
	return 0;
}