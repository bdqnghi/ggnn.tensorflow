int main()
{
	int a,b,i,j,c,d=0,e,f,g;
	char *str,ch[30];
	str=ch;
	gets(str);
	a=strlen(str);
	for(i=0;i<a;i++)
	{
		if(*(str+i)>='0' && *(str+i)<='9') printf("%c",*(str+i));
		else if(*(str+i-1)<'0' || *(str+i-1)> '9'|| i==0) continue;
		else{ printf("\n");d++;}
	}
	return 0;
}
