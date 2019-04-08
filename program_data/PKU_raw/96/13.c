int main()
{
  char s[101];
  int m[100];
  int i,j,l1,l2,k,h;
  scanf("%s\n",s);
  l1=strlen(s);
  if((((s[0]-'0')*10+(s[1]-'0'))<13&&s[2]=='\0')||((s[0]-'0')<13&&s[1]=='\0'))
    { printf("0\n");
     printf("%s\n",s);}
  else
 { for(i=0;i<l1-1;i++)
    { k=(s[i]-'0')*10+(s[i+1]-'0');
      j=k/13;
      h=k-13*j;
      s[i+1]=h+'0';
      m[i]=j;
    }
  int b=0;
  l2=i+1;
  for(i=0;i<l2;i++)
    { if(m[i]==0)
         b++;
      else break;
     }
  for(i=b;i<l2-1;i++)
     printf("%d",m[i]);
  printf("\n");
  printf("%d\n",h);
 }
  return 0;
}