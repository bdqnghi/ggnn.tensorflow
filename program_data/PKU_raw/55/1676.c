char str[100];  
int a,b;  
int num,tmp,i;  
int main() {  
    while(scanf("%d%s %d", &a, str, &b) != EOF){  
        num = 0;  
        for(i=0; str[i]; i++){  
            if(str[i] >= 'a') str[i] -= 32;  
            tmp = (str[i] >= 'A' ? str[i]-'A'+10:str[i]-'0');  
            //tmp = str[i]  
            num = num * a + tmp;  
        }  
        int cnt=0;  
        if(num == 0)  
        {puts("0"); continue;}  
        while(num){  
            if(num%b <=9)  
                str[cnt++] = num%b+'0';  
            else  
                str[cnt++] = num%b-10+'A';  
            num = num/b;  
        }  
        for(i=cnt-1; i>=0; i--)  
            printf("%c",str[i]);  
        puts("");  
    }  
    return 0;  
}  
