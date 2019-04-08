

int main(int argc, char *argv[])
{
  char s[52],w[52];
  scanf("%s%s",s,w);
  int len1,len2,i,m,num; //s?w???? ?????? 
  len1=strlen(s);
  len2=strlen(w);
  
  for(i=0;i<=len2-len1;i++){ //w[i]==s[0]
                            for(m=0,num=0;m<len1;m++){
                                                if(w[i+m]-s[m]==0){
                                                                
                                                                 num++; continue;
                                                                 }
                                                                 }
                            if(num==len1){
                                        break;}
                                        }
                                        
  printf("%d\n",i);
  
  return 0;
}
