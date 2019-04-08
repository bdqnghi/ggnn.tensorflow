int main()
{
    int n, c;
    float b, GPAN;
    int i;
    int xuefen[10], score[10];
    float GPA[10];
    float GPAbiao[] = {4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.5, 1.0, 0};
	b = 0;
	c = 0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &xuefen[i]);
    for(i=0;i<n;i++)
        scanf("%d", &score[i]);
    for(i=0;i<n;i++)
      {
          if(score[i]>=90) GPA[i] = GPAbiao[0] * xuefen[i];
          else if(score[i]>=85&&score[i]<90) GPA[i] = GPAbiao[1] * xuefen[i];
          else if(score[i]>=82&&score[i]<85) GPA[i] = GPAbiao[2] * xuefen[i];
          else if(score[i]>=78&&score[i]<82) GPA[i] = GPAbiao[3] * xuefen[i];
          else if(score[i]>=75&&score[i]<78) GPA[i] = GPAbiao[4] * xuefen[i];
          else if(score[i]>=72&&score[i]<75) GPA[i] = GPAbiao[5] * xuefen[i];
          else if(score[i]>=68&&score[i]<72) GPA[i] = GPAbiao[6] * xuefen[i];
          else if(score[i]>=64&&score[i]<68) GPA[i] = GPAbiao[7] * xuefen[i];
          else if(score[i]>=60&&score[i]<64) GPA[i] = GPAbiao[8] * xuefen[i];
          else GPA[i] = GPAbiao[9] * xuefen[i];
      }
    for(i=0;i<n;i++)
    {
        b = b + GPA[i];
        c = c + xuefen[i];
    }
    GPAN = b/c;
    printf("%.2f", GPAN);
    return 0;
}
