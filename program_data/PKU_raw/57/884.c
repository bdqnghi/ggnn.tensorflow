int main() 
{
  int i,n,l;
  char a[50][33];
  scanf("%d",&n);
  for(i=0;i<n;i++){scanf("%s",&a[i]);}
  for(i=0;i<n;i++){
	  l=strlen(a[i]);
	  if(strcmp(&a[i][l-2],"er")==0&&l>2){a[i][l-2]='\0';}
	  else if(strcmp(&a[i][l-2],"ly")==0&&l>2){a[i][l-2]='\0';}
	  else if(strcmp(&a[i][l-3],"ing")==0&&l>3){a[i][l-3]='\0';}
  }
  for(i=0;i<n;i++){printf("%s\n",a[i]);}
  return 0;
} 
