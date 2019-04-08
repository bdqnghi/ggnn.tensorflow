int main()
{
int n,i,c,a;
scanf("%d",&n);
char szpand[n][20];
for(i=0;i<n;i++){
scanf("%s",szpand[i]);
}
int flag;
for(i=0;i<n;i++){
    flag=1;
    if(szpand[i][0]=='0'||szpand[i][0]=='1'||szpand[i][0]=='2'||szpand[i][0]=='3'||szpand[i][0]=='4'||szpand[i][0]=='5'||szpand[i][0]=='6'||szpand[i][0]=='7'||szpand[i][0]=='8'||szpand[i][0]=='9')
    flag=0;
    for(c=0;c<strlen(szpand[i]);c++){
        a=szpand[i][c];
        if(a>=123&&a<=127||a>=91&&a<=94||a==96||a>=58&&a<=64||a<=47)
{flag=0;break;}
    }
if(!flag)
printf("no\n");
else
printf("yes\n");
}

return 0;
}
