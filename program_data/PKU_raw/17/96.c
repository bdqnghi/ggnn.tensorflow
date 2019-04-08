
int main(){
    int i,j,flag,q;
    char str[101],note[101];
    
    while(scanf("%s",str)!=EOF){
        strcpy(note,str);
        
        for(i=0;i<strlen(note);i++){
            if((note[i]>='a'&&note[i]<='z')||(note[i]>='A'&&note[i]<='Z'))
                note[i]=' ';
        }
        
        for(i=0;i<strlen(note);i++){
            flag=0;
            if(note[i]==')'){
                for(j=i-1;j>=0;j--){
                    if(note[j]=='('){
                        flag=1;
                        note[j]=' ';
                        note[i]=' ';
                        break;
                    }
                }
                if(flag==0)
                    note[i]='?';                
            }                           
        }
        
        for(i=0;i<strlen(note);i++){
            if(note[i]=='(')
                note[i]='$';                            
        }
        
        puts(str);
        puts(note);        
    }
    
    scanf("%d",&q);
    return 0;
}
