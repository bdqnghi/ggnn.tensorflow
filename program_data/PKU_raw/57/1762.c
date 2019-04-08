int main()
{
int i,j;
int n,l;
 char word[50];
 scanf("%d", &n);
 for(i=0; i<n; i++)
 {
  scanf("%s", word);
      l=strlen(word);
     if ((word[l-1]=='r')||(word[l-1]=='y'))
  l=l-2;
  else l=l-3;
     for(j=0; j<l; j++)
   printf("%c", word[j]);
  printf("\n");
 }
 return 0;
}

