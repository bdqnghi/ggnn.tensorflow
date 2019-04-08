void main()
{char str1[80],str2[80];
int n1,n2,i;
gets(str1);
n1=strlen(str1);
for(i=0;i<n1;i++)
{if(str1[i]>='A'&&str1[i]<='Z')
str1[i]=str1[i]+32;
}
gets(str2);
n2=strlen(str2);
for(i=0;i<n2;i++)
{if(str2[i]>='A'&&str2[i]<='Z')
str2[i]=str2[i]+32;
}
if(strcmp(str1,str2)>0)
{printf(">");}
else if(strcmp(str1,str2)<0)
{printf("<");}
else if(strcmp(str1,str2)==0)
{printf("=");}
}