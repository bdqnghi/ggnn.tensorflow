

int main(int argc, char *argv[])
{
    int i,k,an1[1000]={0},an2[1000]={0},j;
    char s1[1000]={0},s2[1000]={0};
    an1[0]=1; //overturn
    cin>>k;
    while(k>0)
    {
              k--;
              for(i=0;i<1000;i++) an1[i]*=2;
              for(i=0;i<1000;i++) {if(an1[i]>=10) {an1[i+1]++;an1[i]-=10;}}
    }
    i=999;
    while(an1[i]==0) i--;
    j=i; 
    for(i=j;i>=0;i--)
    cout<<an1[i];          
    return EXIT_SUCCESS;
}
