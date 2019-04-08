int main()
{
    int a,b,c,d,e,f,i,ms;
    for(i=1;i>0;i++){
        scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
        if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
            break;
        }else if(1<=a&&a<=11&&d>=1&&d<=11&&0<=b&&b<=59&&c>=0&&c<=59&&e>=0&&e<=59&&f>=0&&f<=59){
            ms=(d+12-a)*3600+(e-b)*60+f-c;
            printf("%d\n",ms);
        }else{break;}
    }
    return 0;
}

