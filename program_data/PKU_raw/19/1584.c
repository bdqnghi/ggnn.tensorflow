void main()
{
char stc[201],wrd1[101],wrd2[101],wrdd[100][101];
int i,j=0,k=0,l=0;
gets(stc);
gets(wrd1);
gets(wrd2);

for(i=0;stc[i]!='\0';i++)
{if(stc[i]!=' ')wrdd[j][k]=stc[i],k++;
else wrdd[j][k]='\0',j++,k=0;}

for(i=0;i<=j;i++)
 if(strcmp(wrd1,wrdd[i])==0)strcpy(wrdd[i],wrd2);

for(i=0,k=0;l<=j;i++)
{if(wrdd[l][k]!='\0') stc[i]=wrdd[l][k],k++;
else stc[i]=' ',l++,k=0;}
stc[i-1]='\0';
puts(stc);
}