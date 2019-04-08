int main(){
double r;
int k=0,i,q=1;
char s[600],s1[600];
scanf("%lf",&r);
scanf("%s",s);
scanf("%s",s1);
if(strlen(s)!=strlen(s1))
q=0;
for(i=0;i<strlen(s);i++)
{
if(s[i]!='A'&&s[i]!='C'&&s[i]!='T'&&s[i]!='G'){
q=0;
break;
}
}
for(i=0;i<strlen(s1);i++)
{
if(s1[i]!='A'&&s1[i]!='C'&&s1[i]!='T'&&s1[i]!='G'){
q=0;
break;
}
}
if(q==1){
for(i=0;i<strlen(s);i++)
{
if(s[i]==s1[i])
k++;
}
if(1.0*k/strlen(s)>r)
{
printf("yes");
}
else
{
printf("no");
}
}
if(q==0)
printf("error");
return 0;
}