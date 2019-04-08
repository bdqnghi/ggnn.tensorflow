int unrelatedNumber(int num, int sum)
{
     if (num == 0)
    {
              return sum;
    }
    if (num % 7 == 0 || num % 10 == 7 || num / 10 == 7)
    {
              return  unrelatedNumber(num - 1, sum);
    }
    return  unrelatedNumber(num - 1, sum + num * num);
}

int main(int argc, char ** argv)
{
    int num, sum = 0;
    scanf("%d", &num);
    if (num >= n || num <= 0)
    {
              printf("Input a illegal number.\n");
              return -1;
    }
    printf("%d", unrelatedNumber(num, sum));
    return 0;
}