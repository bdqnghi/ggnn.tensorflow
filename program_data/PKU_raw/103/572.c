int main()
{
 char str[1000];
 scanf("%s",str);
 int sum,i;
 sum=1;
 for(i=1;i<=strlen(str);i++)
 { if(str[i]==str[i-1]||(str[i]-'a')==(str[i-1]-'A')||(str[i]-'A')==(str[i-1]-'a'))
   sum++;
   else
   { if(str[i-1]>='a')
   printf("(%c,%d)",str[i-1]-32,sum);
    else printf("(%c,%d)",str[i-1],sum);
    sum=1;
   }

}
 
}
