int main()
{
    int n;
    char zf[100][100];
    int i,j,sum[100];
    scanf("%d",&n);
    char ddd;
    scanf("%c",&ddd);
    for(i=0;i<n;i++)gets(zf[i]);
    for(i=0;i<n;i++){
        sum[i]=0;
        for(j=0;zf[i][j]!='\0';j++){
            if(j==0){if((zf[i][j]>='A'&&zf[i][j]<='Z')||(zf[i][j]>='a'&&zf[i][j]<='z')||(zf[i][j]=='_'))
             sum[i]=1;
             else  {
             sum[i]=0;
             break;
             }              
            }
            else if(j>0){
            if((zf[i][j]>='A'&&zf[i][j]<='Z')||(zf[i][j]>='a'&&zf[i][j]<='z')||(zf[i][j]>='0'&&zf[i][j]<='9')
            ||(zf[i][j]=='_'))
            sum[i]=1;
            else{
                sum[i]=0;
                break;
                
            }
            
        }
        else{
            sum[i]=0;
            break;
        }
        }
        if(sum[i]==0) 
        printf("no\n");
        if(sum[i]==1)
        printf("yes\n");
    }
    
    
    return 0;
}
