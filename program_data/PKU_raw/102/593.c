
double h[100];

/*void swap(int x, int y) {
        double t;
        t = h[x];
        h[x] = h[y];
        h[y] = t;
    }

int partition(int l, int r) {
        int mark = l;
        for(int i = l; i < r; i++)
            if(h[l] <= h[r]) {
                swap(mark, i);
                mark++;
            }
        swap(mark, r);
        return mark;
    }

void sort(int l, int r) {
        if(l < r) {
            int q;
            q = partition(l, r);
            sort(l, q - 1);
            sort(q + 1, r);
        }
    }*/

void sort(int n) {
    int i, j;
    for(i = 0; i < n - 1; i++)
        for(j = 0; j < n - i - 1; j++)
            if(h[j] > h[j + 1]) {
                double t = h[j];
                h[j] = h[j + 1];
                h[j + 1] = t;
            }
}

int main() {
    int n;
    char in[10];
    scanf("%i", &n);
    for(int i = 0; i < n; i++) {
        scanf("%s%lf", in, &h[i]);
        if(strcmp(in,"male") != 0)
            h[i]= 1000000.0 - h[i];
    }
    sort(n);
    for(int i = 0; i < n; i++) {
        if(i)
            printf(" ");
        if(h[i] > 500000.0)
            printf("%.2lf", 1000000.0 - h[i]);
        else
            printf("%.2lf", h[i]);

    }
    return 0;
}
