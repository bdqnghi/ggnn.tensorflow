int main(){
    char a[101]={0};
	char b[101]={0};
	char c[101]={0};
	int k,f=0;
	gets(a);
	gets(b);
	gets(c);
	int len1=strlen(a);
   	int len2=strlen(b);
   	int len3=strlen(c);
    int i,j;
	for(i=0;i<len1;i++)
	{
	       k=0;
	       for(j=i;j<i+len2;j++)
	       {
                                if(a[j]==b[j-i])
                                {
                                k=k+1;
                                }
                                else
                                {
                                    break;
                                }
           }
           if(k==len2&&(a[i-1]==' ')||i-1<0&&a[i+len2]==' ')
           {
                      for(int k=0;k<len3;k++)
                      {
                                        printf("%c",c[k]);
                                        }
                      i=i+len2-1;
            }
            else printf("%c",a[i]);
                                                       }
                                                      
	return 0;
}
