void main()
{   int i,len,j=0,n;
    char p[199],q[100];
    gets(p);
    len=strlen(p);
    for(i=1;i<=len;i++)
{   if(p[len-i]!=' '&&(i!=len)) q[j]=p[len-i],j++;
     else if(i!=len)
{   for(n=0;n<j;n++)
    printf("%c",q[j-1-n]),q[j-1-n]=0;
    j=0; printf(" ");
}   else {q[j]=p[len-i],j++;
    for(n=0;n<j;n++)
    printf("%c",q[j-1-n]),q[j-1-n]=0;
}   
}   } 