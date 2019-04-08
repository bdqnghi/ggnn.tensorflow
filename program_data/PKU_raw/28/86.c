void main()
{
	char word[10000],str[300][100];
	int i,j,k,l,num[300],m;
	j=k=m=0;
	gets(word);
l=strlen(word);
for(i=0;i<l;i++)
{
if(word[i]==' '&&m!=0)
{
		str[k][j]='\0';
	k++;
	j=0;
m=0;
continue;	}
else if(word[i]==' '&&m==0)continue;
else if(word[i]!=' '){str[k][j]=word[i];
j++;m=1;}
}
for(i=0;i<=k;i++)
num[i]=strlen(str[i]);
j=0;
for(i=0;i<=k;i++)
{if(j==0){printf("%d",num[i]);j=1;}
else printf(",%d",num[i]);}
}
