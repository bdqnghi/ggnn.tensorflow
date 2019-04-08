

int main()

{
  char a[1000];
  scanf("%s",a);
  int i,k;
  int j[1000]={0};
  k=1;
  for (i=1 ; i<1000 ; i++)
  {
    if(a[i]=='\0')
      {   
          if('A'<=a[i-1] && a[i-1]<='Z')
             printf("(%c,%d)",a[i-1],j[k]+1);
          else
             {
                a[i-1]=a[i-1]-'a'+'A';
                printf("(%c,%d)",a[i-1],j[k]+1);
             }
          break;
      }
    else if (a[i]==a[i-1] || a[i]==a[i-1]+'a'-'A' || a[i]==a[i-1]-'a'+'A')
          j[k]++;
    else
      {
          if('A'<=a[i-1] && a[i-1]<='Z')
             printf("(%c,%d)",a[i-1],j[k]+1);
          else
             {
                a[i-1]=a[i-1]-'a'+'A';
                printf("(%c,%d)",a[i-1],j[k]+1);
             }
          k++;
      }
  }
 

  return 0;
}
