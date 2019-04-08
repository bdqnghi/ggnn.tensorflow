
int main(){
  int k;
  char ch,s[100];
  scanf("%d\n",&k);
  for (;k;k--){
    scanf("%c",&ch);
    if ((ch>47)&&(ch<58)){
      while (ch!='\n') scanf("%c",&ch);
      printf("0\n");
    }
    else{
      while (ch!='\n'){
        if ((ch!='_')&&((ch<48)||((ch>57)&&(ch<65))||((ch>90)&&(ch<97))||(ch>122))){
          while (ch!='\n') scanf("%c",&ch);
          ch=' ';
          printf("0\n");
          break;
        }
        scanf("%c",&ch);
      }
      if (ch=='\n')
        printf("1\n");
    }
  }
}
