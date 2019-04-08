
int i,j,k;
int f[80];
int panduan()
{
	char ch[80];
    gets(ch);
	int m=strlen(ch);
	if((ch[0]==95) || (ch[0]<=90&&ch[0]>=65)||(ch[0]<=122&&ch[0]>=97))
	{
		f[j]=1;
		for(i=1;i<m;)
		{         
		     if(((ch[i]<65&&ch[i]>58)||(ch[i]<48) ||((ch[i]>90&&ch[i]<=94)||(ch[i]==96)))||(ch[i]>122))
			 {
			     f[j]=0;
		         break;
			 }
			 else
				 i++;
		}
	}
	else 
		f[j]=0;
	return f[j];
}

int main()
{
	scanf("%d\n",&k);
	for(j=0;j<k;j++)
		panduan();
	for(j=0;j<k;j++)
		printf("%d\n",f[j]);
	scanf("%d",&i);
	return 0;
}