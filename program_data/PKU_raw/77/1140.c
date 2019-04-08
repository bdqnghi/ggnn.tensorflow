      
void main()
{
    char p,s[101];
    int b[101]={0};
    int i,j,l;
    gets(s);
    p=s[0];
    l=strlen(s);
    for(i=0;i<l;i++)
    {
       if(s[i]==p) b[i]=1;
       else 
       {   for(j=i-1;j>=0;j--)
             if(b[j]==1) {b[j]=0;break;}
           printf("%d %d\n",j,i);
       }
    }

}
