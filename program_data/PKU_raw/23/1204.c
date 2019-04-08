int main()
{char a[200];
  int n,i,j,k;
  gets(a);
  n=strlen(a);
  *(a+n)=' ';*(a-1)=' ';
  for(i=n-1,j=n+1;i>=-1;i--)
  if(*(a+i)==' ')
  {for(k=i+1;*(a+k)!=' ';k++,j++)
    *(a+j)=*(a+k);
    *(a+j)=*(a+k),j++;
  }
  for(i=0;i<n;i++)
  printf("%c",*(a+n+1+i));
}

