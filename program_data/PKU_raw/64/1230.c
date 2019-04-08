
int main() {
    struct dot1 {
        int x;
        int y;
        int z;
    } dot[10];
    float dis[10][10]={0,0};
    float distance; 
    int row, col, sign=0;
    int n, i, j;
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        scanf("%d%d%d", &dot[i].x, &dot[i].y, &dot[i].z);
    }
    for (i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            dis[i][j]=(float)(dot[i].x-dot[j].x)*(float)(dot[i].x-dot[j].x)+(float)(dot[i].y-dot[j].y)*(float)(dot[i].y-dot[j].y)+(float)(dot[i].z-dot[j].z)*(float)(dot[i].z-dot[j].z);
            dis[i][j]=sqrt((float)dis[i][j]);
        }
    }
    do {
        distance=dis[0][1];
        row=0;
        col=1;
    for(i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
            if (distance<dis[i][j]) {
                distance=dis[i][j];
                row=i;
                col=j;
            }
        }
    }
    printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", dot[row].x, dot[row].y, dot[row].z, dot[col].x, dot[col].y, dot[col].z, distance);
    dis[row][col]=0;
        sign+=1;
    } while(sign!=(n-1)*n/2);
    return 0;
}
