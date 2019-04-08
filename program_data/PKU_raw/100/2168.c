int main()
{
	char sz[301],s[26]={0},z[26]={0},flag=0;
	gets(sz);
	for(int i=0;sz[i]!='\0';i++)
	{
            if(sz[i]>='a'&&sz[i]<='z'){
            s[sz[i]-'a']++;
            flag++;
            }
            if(sz[i]>='A'&&sz[i]<='Z'){
                                       z[sz[i]-'A']++;
                                       flag++;
                                       }
     }
     for(int i=0;i<26;i++)
     {
             if(z[i]!=0)
             printf("%c=%d\n",i+'A',z[i]);
             }
     for(int i=0;i<26;i++){
             if(s[i]!=0)
             printf("%c=%d\n",i+'a',s[i]);
     }
     if(flag==0)
     printf("No");
     gets(sz);
	return 0;
}

