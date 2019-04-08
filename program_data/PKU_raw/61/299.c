
int main(int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int shulie[20];
    int i;
    shulie[0]=1;
    shulie[1]=1;
    for(i=2;i<=19;i++){
        shulie[i]=shulie[i-1]+shulie[i-2];
    }
    int ceshi[n];
    for(i=0;i<n;i++){
        scanf("%d",&ceshi[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\n",shulie[ceshi[i]-1]);
    }
  return 0;
}