int rearrange(char s1[], char s2[])
{
  int count1[128]={0}, count2[128]={0};
int len1,temp;
len1=strlen(s1); temp=strlen(s2);
if( len1!=temp) return 0;
for(temp=0; temp<len1; ++temp)
{ count1[s1[temp]]++; count2[s2[temp]]++;}
for(temp=0;temp<128; ++temp)
if(count1[temp]!=count2[temp]) return 0;
return 1;
}
void main()
{
  int n,j,k,l1,l2,o,i;
  char a[51],b[51];

  scanf("%s %s",a,b);
  if(rearrange(a,b)!=0)   printf("YES");
  else printf("NO");



  }
