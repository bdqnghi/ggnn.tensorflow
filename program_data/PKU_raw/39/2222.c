
int main()
{
    int n;
    int i;
    int total = 0;
    int max_n(int amount[], int n);
    int max_num;
    
    struct data
    {
           char name[21];
           int grade;
           int assessment;
           char leader;
           char west;
           int paper;
    };
    
    scanf("%d", &n);
    
    struct data *input = (struct data*) malloc(sizeof(struct data) * n);
    int *amount = (int*) malloc(sizeof(int) * n);
    
    
    
    for(i = 0; i <= n - 1; i++)
    {
          scanf("%s %d %d %c %c %d", input[i].name, &input[i].grade, &input[i].assessment, &input[i].leader, &input[i].west, &input[i].paper);
          amount[i] = 8000 * (input[i].grade > 80 && input[i].paper > 0) + 4000 * (input[i].grade > 85 && input[i].assessment > 80) + 2000 * (input[i].grade > 90) + 1000 * (input[i].grade > 85 && input[i].west == 'Y') + 850 * (input[i].assessment > 80 && input[i].leader == 'Y');
          total = total + amount[i];
    }
    
    max_num = max_n(amount, n);
    printf("%s\n%d\n%d", input[max_num].name, amount[max_num], total);
    
    free(input);
    free(amount);
    
    
    return 0;
}

int max_n(int amount[], int n)
{
    int max_num;
    int max = 0;
    int i;
    
    for(i = 0; i <= n - 1; i++)
    {
          if(amount[i] > max)
          {
                      max = amount[i];
                      max_num = i;
          }
    }
    
    
    return max_num;
}
          
