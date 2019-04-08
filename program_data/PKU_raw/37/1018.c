int main(){
    int t,num;
    char s[100][1000],a[4];
    char *p,*q1,*q2;
    gets(a);
    t=atoi(a);
    for(p=*s;p<*(s+t);p+=1000)
        gets(p);
    for(p=*s;p<*(s+t);p+=1000){
        for(q1=p;q1<p+strlen(p);q1++){
            num=0;
            for(q2=p;q2<p+strlen(p);q2++){
                if(*q1==*q2)
                    num++;
                if(num==2)
                    break;
            }
            if(q2==p+strlen(p)){
                printf("%c\n",*q1);
                break;
            }
        }
        if(q1==p+strlen(p))
            printf("no\n");
    }
    return 0;
} 