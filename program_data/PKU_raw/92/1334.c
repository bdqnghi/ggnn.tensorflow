
int sort(int x[], int m){
  int i, j, k;
  for (i=0;i<m;i++)
        for (j=i+1;j<m;j++)
            if (x[i]<x[j])
            {
               k = x[i];
               x[i] = x[j];
               x[j] = k;
                          }
}

int main(){
    while (1)
    {
          
    int num;
    int a[1000];
    int b[1000];
    int i,j,shadow,k;
    int temp_gain=0, temp_tie=0, temp_lose=0;
    int gain=0, lose=0, tie=0;
    int total_gain=0;
    scanf("%d",&num);
    
    if (num==0)
       break;
       
    for (i=0;i<num;i++)
        scanf("%d",&a[i]);
    for (i=0;i<num;i++)
        scanf("%d",&b[i]);
    sort(a,num);
    sort(b,num);
    
    for (i=0;i<num;i++)
    {
        shadow = i;
        i=0;
        for (j=shadow;j<num;j++,i++)
        {
            if (a[i]>b[j])
               temp_gain++;
            else if (a[i]<b[j])
               temp_lose++;
            else
               temp_tie++;
            }
        temp_lose += shadow;
        if ((temp_gain - temp_lose)>(gain - lose) || shadow==0)
           {
                       gain = temp_gain;
                       lose = temp_lose;
                       tie = temp_tie;
                       }
        i = shadow;
        temp_gain = 0;
        temp_lose = 0;
        temp_tie = 0;
        }

    total_gain = (gain-lose)*200;
    printf("%d\n",total_gain);    
}
getchar();
getchar();
    }
