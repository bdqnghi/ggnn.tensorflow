int num;
char right(char c)
{ char ch;
    if(c!='('&&c!=')')
       ch=' ';
    else if(c==')')
     { if (num==0) ch='?';
       else
        { num--;
          ch=' ';
        }
     }
    else
     { num++;
       ch=c;
     }
    return ch;
}
char left(char c,char a)
{ char ch;
  if(a==' '||a=='?')
   { ch=a;
     if(c==')')num++;
   }
  else if (num==0) ch='$';
       else
        { num--;
          ch=' ';
        }
  return ch;
}
main()
{ int i,n;
  char s[101],a[101];
  scanf("%d",&n);
  while(gets(s))
   { num=0;
     for(i=0;i<strlen(s);i++)
       a[i]=right(s[i]);
     num=0;
     for(i=strlen(s)-1;i>=0;i--)
       a[i]=left(s[i],a[i]);
     puts(s);
     for(i=0;i<strlen(s);i++)
       printf("%c",a[i]);
       printf("\n");
   }
  return 0;
}