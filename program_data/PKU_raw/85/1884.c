int ismin(char x)
{
    if(x=='a'||x=='b'||x=='c'||x=='d'||x=='e'||x=='f'||x=='g'||x=='h'||x=='i'||x=='j'||x=='k'||x=='l'||x=='m'||x=='n'||x=='o'||x=='p'||x=='q'||x=='r'||x=='s'||x=='t'||x=='u'||x=='v'||x=='w'||x=='x'||x=='y'||x=='z')
        return 1;
    else
        return 0;
}
int ismax(char x)
{
    if(x=='A'||x=='B'||x=='C'||x=='D'||x=='E'||x=='F'||x=='G'||x=='H'||x=='I'||x=='J'||x=='K'||x=='L'||x=='M'||x=='N'||x=='O'||x=='P'||x=='Q'||x=='R'||x=='S'||x=='T'||x=='U'||x=='V'||x=='W'||x=='X'||x=='Y'||x=='Z')
        return 1;
    else
        return 0;
}
int isalpha(char x)
{
    if(ismin(x)||ismax(x))
        return 1;
    else
        return 0;
}
int isalnum(char x)
{
    if(x=='1'||x=='2'||x=='3'||x=='4'||x=='5'||x=='6'||x=='7'||x=='8'||x=='9'||x=='0'||isalpha(x))
        return 1;
    else
        return 0;
}
int istrue(char buf[30])
{  
    int i=1;
    if(isalpha(buf[0])||buf[0]=='_') 
    {
        while(buf[i]!='\0')
        {
            if(isalnum(buf[i])||buf[i]=='_'){
                i++;
                continue;
            }else{
                return 0;
            }
        }
        return 1;
    }else
        return 0;
}
int main()
{
    char buf[30];
    int i,n;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&buf);
        if(istrue(buf)==1)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}