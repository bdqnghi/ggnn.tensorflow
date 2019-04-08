int main()
{
    char str1[252],str2[252],str3[253];
    char c;
    int s,i,a,b;
    gets(str1);
    gets(str2);
    a=strlen(str1);
    b=strlen(str2);
    for(i=0;i<=a/2-1;i++)
    {
       c=str1[i];
       str1[i]=str1[a-1-i];
       str1[a-1-i]=c;
    }
    for(i=0;i<=b/2-1;i++)
    {
       c=str2[i];
       str2[i]=str2[b-1-i];
       str2[b-1-i]=c;
    }
    if(a>b)
    {
       for(i=b;i<a;i++)
       str2[i]='0';
       str2[i]='\0';
    }
    if(a<b)
    {
       for(i=a;i<b;i++)
       str1[i]='0';
       str1[i]='\0';
    }
    for(i=0;str1[i]!='\0';i++)
    {
       s=str1[i]-'0'+str2[i]-'0';
       if(s>=10)
       {
          str3[i]=s-10+'0';
          str2[i+1]=str2[i+1]+1;
       }
       else
          str3[i]=s+'0';
    }
    if(str2[i]==1)
    {
       str3[i]='1';
       str3[i+1]='\0';
    }
    else  str3[i]='\0';
    for(i=strlen(str3)-1;str3[i]=='0'&&i>0;i--)
       str3[i]='\0';
    for(i=strlen(str3)-1;i>=0;i--)
       printf("%c",str3[i]);
}
