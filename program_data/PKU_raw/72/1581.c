int m,n;
int height[40][40];
double average[40][40];

int main(){
    int i,j;
    scanf("%d%d",&m,&n);
    memset(average,0,sizeof(average));
    
    for (i=0;i<m;i++){
        for (j=0;j<n;j++) scanf("%d",&height[i][j]);
    }
    
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            int count = 0,sum = 0;
            if (i>0) {
                sum += height[i-1][j];
                count++;
            }
            if (i<m-1) {
                sum += height[i+1][j];
                count++;
            }
            if (j>0) {
                sum += height[i][j-1];
                count++;
            }
            if (j<n-1) {
                sum += height[i][j+1];
                count++;
            }
            average[i][j] = (double) sum / count;
        }
    }
    
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            double maxh;
            maxh = height[i][j];
            if (i>0 && height[i-1][j] > maxh) {
                maxh = height[i-1][j];
            }
            if (i<m-1 && height[i+1][j] > maxh) {
                maxh = height[i+1][j];
            }
            if (j>0 && height[i][j-1] > maxh) {
                maxh = height[i][j-1];
            }
            if (j<n-1 && height[i][j+1] > maxh) {
                maxh = height[i][j+1];
            }
            if (abs(maxh - (double)height[i][j]) < 0.000001) printf("%d %d\n",i,j);
        }
    }

    return 0;
}
