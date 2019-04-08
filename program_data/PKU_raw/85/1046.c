int main()
{
    int n,i,k,s;
    scanf("%d",&n);
    char zfc[100];
    for(k=0;k<n;k++){
        scanf("%s",zfc);
        for(i=0;i<strlen(zfc);i++){
            s=1;
        if((i==0&&(zfc[0]=='_'||(zfc[0]>='a'&&zfc[0]<='z')||(zfc[0]>='A'&&zfc[0]<='Z')))||(i!=0&&((zfc[i]=='_'||(zfc[i]>='0'&&zfc[i]<='9')||(zfc[i]>='a'&&zfc[i]<='z')||(zfc[i]>='A'&&zfc[i]<='Z')))))
        {s=1;
        }else{s=0;
        break;}
        }
        if(s==1){printf("yes\n");}else{printf("no\n");}
            }
            
            return 0;
            }
