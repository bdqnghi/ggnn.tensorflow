main()
{char string1[50],string2[50];
 scanf("%s%s",string1,string2);
 int i,j,k,len1,len2;
 char t;
 len1=strlen(string1);
 len2=strlen(string2);
 for(i=0;i<len1-1;i++)
	{k=i;
     for(j=i+1;j<len1;j++)
		 if(string1[j]>string1[k])k=j;
	 if(k!=i)
	 {t=string1[i];string1[i]=string1[k];string1[k]=t;}
	}
 for(i=0;i<len2-1;i++)
	{k=i;
     for(j=i+1;j<len2;j++)
		 if(string2[j]>string2[k])k=j;
	 if(k!=i)
	 {t=string2[i];string2[i]=string2[k];string2[k]=t;}
	}
 if(strcmp(string1,string2)==0)printf("YES");
 else printf("NO");
}
