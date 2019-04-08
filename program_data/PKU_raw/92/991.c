int cmp(const void * a, const void * b) {
        return *(int *)a - *(int *)b;
}
int a[1000], b[1000], queue[1001];
int head, tail;
void enqueue(int elem) {
    queue[head ++] = elem;
    if (head == MAX) head = 0;
}
int top() {
    return queue[tail];
}
int dequeue() {
    int ret = queue[tail ++];
    if (tail == MAX) tail = 0;
    return ret;
}
int empty() {
    return head == tail;
}
int size() {
    if (head < tail)
        return head + MAX - tail;
    else return head - tail;
}
int main() {
        int n, i, j, draw, win;
        int ans;
        while (scanf("%d", &n) != EOF && n != 0) {
        head = tail = 0;
                for (i = 0; i < n; i ++)
                        scanf("%d", a + i);
                for (i = 0; i < n; i ++)
                        scanf("%d", b + i);
                qsort(a, n, sizeof(int), cmp);
                qsort(b, n, sizeof(int), cmp);
                win = draw  = 0;
                for (i = n - 1, j = n - 1; j >= 0; j --) {
                        if (a[i] > b[j]) i --, win ++;
            else {
                if (!empty() && top() > b[j]) {
                    dequeue();
            //        printf("dequeue: %d\n", dequeue());
                    win ++;
                }
                else {
                                if (a[i] == b[j])
                        enqueue(a[i --]);
                }
            }
                }
        draw = size();
                ans = (2 * win - n + draw) * 200;
                printf("%d\n", ans);
//              printf("ans : %d\n", ans);
//              printf("win : %d\n", win);
//              printf("draw: %d\n", draw);
        }
        return 0;
}
