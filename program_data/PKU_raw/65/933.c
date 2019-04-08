int main(){
    int n,i,s1[200],s2[200],a=0,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&s1[i],&s2[i]);
        if((s1[i]-s2[i])==1)b++;
        else if((s2[i]-s1[i])==1)a++;
        else if(s2[i]>s1[i])b++;
        else if(s2[i]<s1[i])a++;  
    }
    if(a<b)printf("B");
    else if(a==b)printf("Tie");
    else if(a>b)printf("A");
    return 0;
}

