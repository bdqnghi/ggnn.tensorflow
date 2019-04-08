
int main()
{
    int a[1000];
    int max, max2;
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    max = a[0];
    for(int i=1; i<n; i++){
        if(a[i] > max)
            max = a[i];
    }

    for(int i=0; i<n; i++){
        if(a[i] != max){
            max2 = a[i];
            break;
        }
    }
    for(int i=0; i<n; i++){
        if((a[i]>max2) && (a[i]!=max)){
            max2 = a[i];
        }
    }

    printf("%d\n%d\n", max, max2);

    return 0;
}