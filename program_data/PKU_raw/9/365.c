
int main()
{
    struct patient_t {
        char id[10];
        int age;
    } patients[100], t;
    int i, j, n;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%s%d", &patients[i].id, &patients[i].age);
    }
    for (i=0; i<n; i++) {
        for (j=n-1; j>i; j--) {
            if (patients[j].age >= 60 &&
                patients[j].age > patients[j-1].age) {
                t = patients[j];
                patients[j] = patients[j-1];
                patients[j-1] = t;
            }
        }
    }
    for (i=0; i<n; i++) {
        printf("%s\n", patients[i].id);
    }
    return 0;
}