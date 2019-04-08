main()
{char string[100],word[50][15],subword[15],subed[15];
 gets(string);
 scanf("%s%s",subed,subword);
 char *p=string;
 int i=0,j;
 while(*p!='\0')
	{sscanf(p,"%s",word[i]);
     p+=strlen(word[i]);
	 i++;
	 if(*p==' ')p++;
	}
 for(j=0;j<i;j++)
	 if(strcmp(word[j],subed)==0)strcpy(word[j],subword);
 printf("%s",word[0]);
 for(j=1;j<i;j++)
	 printf(" %s",word[j]);
}
