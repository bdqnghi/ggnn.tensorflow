  

  
struct stack  
{  
    char data[101];  
    int top;  
};  
  
long int change(int a, char *s);  
  
int main()  
{  
    long int a, b, n;  
    char str[101];  
  
    while(scanf("%ld %s %ld", &a, str, &b) != EOF)  
    {  
        n = change(a, str);  
        if(n == 0)  
        {  
            printf("0");  
        }else  
        {  
            int temp;  
            struct stack *s = (struct stack *)malloc(sizeof(struct stack));  
            s->top = 0;  
  
            while(n)  
            {  
                temp = n % b;  
                if(temp >= 0 && temp <= 9)  
                {  
                    s->data[s->top ++] = temp + '0';  
                }else  
                {  
                    s->data[s->top ++] = temp - 10 + 'A';  
                }  
                n /= b;  
            }  
  
            while(s->top)  
            {  
                printf("%c", s->data[-- s->top]);  
            }  
        }  
        printf("\n");  
    }  
  
    return 0;  
}  
  
  
long int change(int a, char *s)  
{  
    int i, b;  
    long int n, c;  
  
    for(n = 0, c = 1, i = strlen(s) - 1; i >= 0; i --)  
    {  
        if(s[i] >= 'A' && s[i] <= 'Z')  
            b = s[i] - 55;  
        else if(s[i] >= 'a' && s[i] <= 'z')  
            b = s[i] - 87;  
        else  
            b = s[i] - '0';  
        n += b * c;  
        c *= a;  
    }     
  
    return n;  
}  
