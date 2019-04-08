int main()
{
    int sz[400];
    int sub[400];
    int n,count=0,bar=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            scanf("%d",&sz[i]);
    }
    for(int j=0;j<n;j++){
            for(int a=0;a<count;a++){
                    if(sz[j]==sub[a]){
                             bar=1;
                    }
            }
            if(bar==0){
                       if(j==0){
                                printf("%d",sz[j]);
                                sub[count]=sz[j];
                                count++;
                       }
                       else{
                                printf(",%d",sz[j]);
                                sub[count]=sz[j];
                                count++;
                       }
            }
            bar=0;
    }
	return 0;
}
