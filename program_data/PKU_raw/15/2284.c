
int main (void)
{
    int n, i, j, start_row, start_col, end_row, end_col, row, col, value, area;
    
    scanf ("%i", &n);
    start_row = 0;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++) {
            scanf ("%i", &value);
            if (!value) {
                       row = i;
                       col = j;
                       if (start_row == 0)
                          start_row = row, start_col = col;
            }
        }
    end_row = row, end_col = col;
    area = (end_row - start_row - 1) * (end_col - start_col - 1);
    printf ("%i", area);
    
    return 0;
}
