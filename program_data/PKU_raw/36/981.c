char s[50],w[50];
int len1;
int len2;
int main()
{
    scanf("%s %s",s,w);
    len1=strlen(s);
    len2=strlen(w);
    void paixu(char x[],int len);
    if(len1!=len2) printf("NO");
    else
    {
        paixu(s,len1);
        paixu(w,len2);
        if(strcmp(s,w)==0) printf("YES");
        else printf("NO");
    }
}

void paixu(char x[],int len)
{
     int i,j;
     char t;
     for(i=0;i<=len-2;i++)
     {
       for(j=i+1;j<=len-1;j++)
       {
         if(x[j]>x[i]){t=x[j];x[j]=x[i];x[i]=t;}
       }
     }
}
