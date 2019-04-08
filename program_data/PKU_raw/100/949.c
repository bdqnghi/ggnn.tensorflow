int main()
{
    char a[301];
    int num[26]={0},i,j,n,p=0;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {     if(a[i]>='a'&&a[i]<='z')
          {j=a[i]-97;
          num[j]++;}
                    }
    for(j=0;j<26;j++)
    {if(num[j]>0){
          p=(char)(j+97);        
    printf("%c=%d\n",p,num[j]);}
     }
     if(p==0)
     printf("No");
     return 0;
    }