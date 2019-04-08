 int main()
 {
     int i,n;
        n=1;
     char str[1001];
     scanf("%s",str);
     for(i=0;i<strlen(str);i++)
     {
        if(str[i]>='a'&&str[i]<='z')
        {
           str[i]=str[i]-'a'+'A';
        }
     }
     i=0;
     while(i<strlen(str))
     {
        if(str[i]==str[i+1])
        {
           n=n+1;
        }
        else
        {
           printf("(%c,%d)",str[i],n);
           n=1;
        }
        i++;
     }
 }