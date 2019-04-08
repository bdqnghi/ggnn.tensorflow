int main()
{
	char zfc[101]={0};
	gets(zfc);
	char zfc2[101]={0};
	int n;
		int i=0;
	int j=0;
	n=strlen(zfc);
    for(i=0;i<n;i+=1)
	{if(zfc[i]!=' '){zfc2[j]=zfc[i];j+=1;}
	else if(zfc[i]==' '&&zfc[i+1]!=' '){zfc2[j]=' ';j+=1;}}



printf("%s\n",zfc2);
return 0;
}