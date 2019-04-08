int main(){
    int c,space=0;
    while(1){
        c = getchar();
        if(c == '\n'){break;}
        if(c == 32 && space == 0){
            putchar(c);
            space = 1;
        }
        else if(c != 32){
            putchar(c);
            space = 0;
        }
    }
    return 0;
}