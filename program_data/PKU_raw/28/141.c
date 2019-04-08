main()
{char string[1000],*p;
 int count[300],i=0,j=0;
 gets(string);
 p=string;
 char word[300][20];
 do
	{while(*p==' ')p++;
     word[i][j]=*p;
	 p++;
	 j++;
	 if(*p==' '||*p=='\0')
		{count[i]=j;
		 i++;
	     j=0;
		}
	}while(*p);
 printf("%d",count[0]);
 for(j=1;j<i;j++)
	 printf(",%d",count[j]);
}