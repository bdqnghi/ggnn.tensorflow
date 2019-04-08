int main() {
    int a[m][n],i,j,max,min,flag=0,i1;
       for (i=0;i<m;i++)
        for (j=0;j<n;j++)
            scanf("%d",&a[i][j]);
        for (i=0;i<m;i++) {
        i1=i;
        for (max=a[i][0],j=0;j<n;j++) 
            if (max<a[i][j])
                max=a[i][j];
        for (j=0;j<n;j++) {
            for (min=a[i][j],i=0;i<m;i++)
                if (min>a[i][j])
                    min=a[i][j];
            i=i1;
            if (a[i][j]==max&&a[i][j]==min) {
                printf("%d %d %d",i+1,j+1,a[i][j]);
                flag++;
            }
        }

    }
    if (flag==0)
        printf("not found\n");
    else printf("\n");
} 
