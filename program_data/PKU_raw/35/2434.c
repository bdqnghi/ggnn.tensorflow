int main (){
    int sz[8][8];
    int x,y,X,Y,i,k,tx,ty;
    tx=1;
    ty=1;
    char dou;
    scanf("%d %c %d",&Y,&dou,&X);
    for(y=0;y<=Y-1;y++){
        for(x=0;x<=X-1;x++){
            scanf("%d",&sz[x][y]);
        }
    }
    for(y=0;y<=Y-1;y++){
        for(x=0;x<=X-1;x++){
            for(i=0;i<=X-1;i++){tx=1;
                if (sz[i][y]>sz[x][y]){tx=0;
                    break;
                }
            }
            for(k=0;k<=Y-1;k++){ty=1;
                if(sz[x][k]<sz[x][y]){ty=0;
                    break;
               
                }
            }
            if(tx==1&&ty==1){printf("%d+%d\n",y,x);
            break;
            }
        }
       if(tx==1&&ty==1){ break;}
    }
    if(tx==0||ty==0){printf("No\n");}
 return 0;   
}
