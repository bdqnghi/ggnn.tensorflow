int main()
{int i,m,j,n;
char s[101],a[101];
 gets(s);
 m=strlen(s);
 j=0;
 for(i=0;i<m;i++)
 {if(i==0)

 {
     if(s[i]!=' '){a[j]=s[i];
                    j++;
                    }
 }

     else {
     if(s[i]!=' '||(s[i]==' '&&s[i-1]!=' '))
 {a[j]=s[i];
 j++;
 }
     }
 }
 
 for(i=0;i<j;i++)
 {printf("%c",a[i]);}
 return 0;
}

