
int main()
{
	int n, k, applesRemain;
	int count;
	double numDouble;
	int applesBefore;
    int mytry;
    
	scanf("%d %d", &n, &k);     // read number of monkeys n and remainder k
    
    count = 0;                  // count if appleBefore is valid, stop loop when count == n
    for(mytry = 1; count < n ; mytry++)
    {
        applesRemain = mytry;   // try to initialize applesRemain by mytry, start from 1
        for(; count < n; count++)
        {
            numDouble = (applesRemain + k - (double)k / n) * n / (double)(n - 1);   // from the relation between a(m) and a(m-1)
            applesBefore = (int)numDouble;
            
            if(numDouble - applesBefore > 0)    // if applesBefore is not valid
            {
                count = 0;                      // reset count, try with next mytry
                break;
            }
            else
            {
                applesRemain = applesBefore;    // continue calculation process, count++
            }
        }
    }
    
	printf("%d\n", applesRemain);               // output result
    
	return 0;
}
