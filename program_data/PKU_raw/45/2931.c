main()
{   int n,i,x,j,z,len,len1,len2;
    char s[1000],a[1000]={'\0'},b[1000]={'\0'},c[1000]={'\0'};
    gets(s);
    len=strlen(s);
	for(i=0;s[i]!=' ';i++)
	 a[i]=s[i];
	 z=0;
	 for(j=i+1;j<len;j++)
	 { b[z]=s[j];z++;}
	  len1=strlen(a);
	  len2=strlen(b);
	  x=0;
	  for(i=0;i<len2;i++)
	  { if(b[i]==a[0])
	     { for(j=i;j<i+len1;j++)
	       {c[x]=b[j];x++;
	       }
	       if(strcmp(c,a)==0)break;
	       else continue;
	     }
	  }
	  printf("%d",i);
}