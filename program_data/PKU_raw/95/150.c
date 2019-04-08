int main()
{int n,i;
	char s[80],k[80];
gets(s);
gets(k);
for (n=0;n<81;n++)
{if ((s[n]<='z')&&(s[n]>='a'))
    s[n]-=32;
if ((k[n]<='z')&&(k[n]>='a'))
    k[n]-=32;
}


for (i=0;i<81;i++)
{if (s[i]==k[i])
	{if ((s[i]==0)&&(k[i]==0))
		{printf("=");break;}
	else continue;
	}
if (s[i]>k[i])
{printf(">");break;}
if (s[i]<k[i])
{printf("<");break;}
}
return 0;
}
