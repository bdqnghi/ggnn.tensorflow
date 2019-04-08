int main()
{
char s1[250];
char s2[250];
scanf("%s",s1);
scanf("%s",s2) ; 
int l1 ,l2 ;
l1=strlen(s1);
l2=strlen(s2) ;
 
int t,i,p[251]={0};
for (i=0;i<250;i++)
{
if(i<l1&&i<l2)
t=s1[l1-i-1]+s2[l2-i-1]-'0'-'0'; 
else if(i>=l1&&i<l2)
t=s2[l2-i-1]-'0';
else if(i>=l2&&i<l1)
t=s1[l1-i-1]-'0';
else if(i>=l1&&i>=l2)
 break;
p[i]=p[i]+t;
if(p[i]>9)
{
p[i]=p[i]-10;
p[i+1]++;
}   
}  
while(p[i]==0&&i>0)
i--;
for (;i>=0;i--)
{
printf("%d",p[i]);    
    
    
    
}    
    
    
}   
    
    
        