char il[MAX],ol[MAX];
int i,j=1;
int main()
{
    gets(il);
    ol[0]=il[0];
    for(i=1;il[i]!='\0';i++){
        if(il[i-1]!=' '||il[i]!=' '){
            ol[j]=il[i];
            j++;
        }
    }
    ol[j]='\0';
    puts(ol);
    return 0;
}