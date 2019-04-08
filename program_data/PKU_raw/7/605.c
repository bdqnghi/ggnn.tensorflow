int main(){
    char yuan[256];
    char sub[256];
    char replace[256];
    char sz[256][256];
    gets(yuan);
    gets(sub);
    gets(replace);
    int n=strlen(sub);
    int m=strlen(yuan);
    int i,k,result;
    int a=0;
    int b=0;
    for(i=0;i<=m-n;i++)
    {
                       for(k=0;k<n;k++)
                       {
                                       sz[a][b]=yuan[i+k];
                                       b++;
                                       }
                                       sz[a][b]='\0';
                                       a++;
                                       b=0;
                                       }
                                       for(i=0;i<a;i++)
                                       {
                                                       result=strcmp(sz[i],sub);
                                                       if(result==0)
                                                       {
                                                                    strcpy(sz[i],replace);
                                                                    printf("%s",sz[i]);
                                                                    i+=n;
break;
                                                                    }
                                                                    else{
                                                                    printf("%c",yuan[i]);
                                                                    }
                                                                    }
                                       for(i=i;i<m;i++)
                                       {
                                                        printf("%c",yuan[i]);
                                                        }
                                       
                                                                      
                       
                       
    
    
    
    
    
    
    
    
                            
 
		return 0;
}
