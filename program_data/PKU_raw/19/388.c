main()
{char words[20][100],sub[100],subed[100];
 char string[500];
 int i,d1=0,d2=0,len,n=1;
 char(*p)[100];
 gets(string);
 len=strlen(string);
 for(i=0,d2=0;i<len&&d2<100;i++,d2++)
	{if(string[i]==' '){words[d1][d2]='\0';d1++;n++;d2=0;}
	if(string[i]==' ')continue;
	if(string[i-1]==' ')d2--;
	words[d1][d2]=string[i];		
	}
 words[d1][d2]='\0';
 p=words;
 scanf("%s",subed);
 scanf("%s",sub);
 for(i=0;i<n;i++)
	 if(strcmp(*(p+i),subed)==0)strcpy(*(p+i),sub);
 for(i=0;i<n-1;i++)
	 printf("%s ",p+i);
 printf("%s",p+n-1);
}