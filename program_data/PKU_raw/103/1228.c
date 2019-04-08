
int main()
{
char s[1000];
int a[1000],t,len;
char b[1000],k;
int i,j;

for(i=0;i<1000;i++)
a[i]=0;

gets(s);
len=strlen(s);



for(i=0;i<len;i++)
{
                  if(s[i]-'Z'>0)
                  s[i]=s[i]+'A'-'a';
                  //printf("%c",s[i]);
                  
}

k=s[0];
b[0]=s[0];
a[0]=1;
j=0;
if(len==1)
printf("(%c,%d)",b[0],a[0]);
else
 {       
 for(i=1,j=0;i<len;i++)    
    {
                          if(k==s[i])//||k==(s[i]+'A'-'a')||k==(s[i]-'A'+'a'))
                          a[j]++;
                          else
                          {
                              j++;
                              a[j]=1;
                              k=s[i];
                              b[j]=s[i];
                          } 
                          
                          
    }
     
 for(i=0;i<=j;i++)
 printf("(%c,%d)",b[i],a[i]);    
 }
}
