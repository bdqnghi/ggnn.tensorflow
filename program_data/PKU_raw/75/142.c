int main()
{
    char input[4000], comma;
    int enter[1000], leave[1000];
    cin >> input;
    int len = strlen(input), i, j, k, u = 0, min = 1000, max = 0;

    for (i = 0; i < len; i++) {
        if (input[i] != ',') {
            char temp[2000];
            k = 0;
            for (j = i; input[j] >= '0' && input[j] <= '9'; j++, k++) temp[k] = input[j]; temp[k] = '\0';
            enter[u] = atoi(temp);
            if (enter[u] < min) min = enter[u];
            i = j;
            u++;
        }
    }

    len = u;
    for (i = 0; i < len - 1; i++) {
        cin >> leave[i] >> comma;
        if (leave[i] > max) max = leave[i];
    }
    cin >> leave[len - 1];
    if (leave[len - 1] > max) {
        max = leave[len - 1];
    }

    int num[1000];
    for (i = min; i < max; i++) {
        for (j = 0; j < len; j++) {
            if (i >= enter[j] && i < leave[j]) num[i]++;
        }
    }

    int maxans = num[min];
    for (i = min; i < max; i++) {
        if (num[i] > maxans) maxans = num[i];
    }
    cout << len << " " << maxans << endl;
    return 0;
}
