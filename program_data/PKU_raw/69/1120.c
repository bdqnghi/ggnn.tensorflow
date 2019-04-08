char res[Max+1];           // ?
char a[Max],b[Max];        // ????!
int len1,len2;
void Init(char *a)
{
int i;
for(i=0; i<Max; i++)
{
   a[i] = '0';
}
return ;
}

void Long_Add(char *res,char *newone)   // res????????????????.
{
int i,j;
int len;
int tempsum;
int carry = 0;                 // ??
len = strlen(newone);
for(i=Max-1,j=len-1; i>=0,j>=0; i--,j--)
{
   tempsum = res[i]-'0'+newone[j]-'0'+carry;
   res[i] = tempsum%10+'0';
   carry = tempsum/10;
}
while(carry > 0)   // ------??????????!
{
   tempsum = res[i]-'0'+carry ;
   res[i] = tempsum%10+'0';
   carry = tempsum/10;
   i--;
}
//------------------- ??????????
for(i=0;i<Max;i++)
   if(res[i] != '0')
    break;
if(i==Max)
printf("0");
else
{ 
int n=i;
for(n;n<Max;n++)
   putchar(res[n]);} 
//--------------------------????????????    !

return ;
}
void Input(char *a,char *b)
{
int i,len;
scanf("%s %s",a,b);
len1=strlen(a);
len2=strlen(b);
Init(res);
len=strlen(a);
for(i=len-1; i>=0; i--)
   res[Max+i-len] = a[i];
}
int main()
{
Input(a,b);
Long_Add(res,b);
return 0;
}
