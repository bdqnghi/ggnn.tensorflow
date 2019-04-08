int main()
{

    char s[30000];char yc[30000];char tc[30000];int tag=1;int u=0;
gets(s);gets(yc);gets(tc);
for(int i=0;i<strlen(s);i++)
{
if(s[i]==yc[0]) {tag=2;     for(int j=0;j<strlen(yc);j++)
     {
     if(s[i+j]!=yc[j]){tag=0;break;}}

     }
     if(tag==2){printf("%s",tc);u=i+strlen(yc);break;}


if(tag!=2){printf("%c",s[i]);}

}
if(tag==2){for(int k=u;k<strlen(s);k++){printf("%c",s[k]);}}
    
	return 0;
}