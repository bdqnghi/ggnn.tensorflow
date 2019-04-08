void nixu(char s[])
{int j,k,h,len=strlen(s);


	if(s[0]=='-') 
	{if(s[1]=='0')  printf("0\n");
	else {printf("-");
			for(k=0;k<len;k++)
			{
             s[k]=s[k+1];
			}

			nixu(s);}
	}
	else if(s[0]=='0')  printf("0\n");
	else if(s[0]>=49&&s[0]<=57)  
		{
			for(h=len-1;h>=0;h--)
		{if(h==len-1&&s[h]!='0')printf("%c",s[h]);
		else if(h!=len-1&&  (s[h+1]!='0')|| (s[h]!='0')   )printf("%c",s[h]);
		}
	printf("\n");}
}
int main()
{
	int i;
	char a[10];
	for(i=0;i<6;i++)
	{
	scanf("%s",a);

	nixu(a);
	}
return 0;
}