int main()
{ 
    char a[50],b[50],*p1,*p2;
    scanf("%s",a);
    scanf("%s",b);
    int c1[52]={0},c2[52]={0},i,l1,l2;
    l1=strlen(a);l2=strlen(b);
    for(p1=a;p1<a+l1;p1++){
        if(*p1>64&&*p1<91){i=*p1;c1[i-65]++;}
        if(*p1>96&&*p1<123){i=*p1;c1[i-71]++;}
    }
    for(p2=b;p2<b+l2;p2++){
        if(*p2>64&&*p2<91){i=*p2;c2[i-65]++;}
        if(*p2>96&&*p2<123){i=*p2;c2[i-71]++;}
    }
    for(i=0;i<52;i++){
       if(c1[i]==c2[i]){
          if(i==51){printf("YES");}
       }
       else{printf("NO");break;}
    }
          
	return 0;
}