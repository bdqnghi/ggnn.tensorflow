
int main()
{
    int i, j, n;
    int a[100];
    /* ???? */
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    /* ???? */
    for (i=0,j=n-1; i<j; i++,j--) {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    /* ???? */
     for (i=0; i<n; i++){ 
               printf("%d", a[i]);
			   if(i!=n-1) printf(" ");
    }
            return 0;
}