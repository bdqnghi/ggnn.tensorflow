int main()
{
    float n,a,t1=0,t2=0,t3=0,t4=0,r1,r2,r3,r4;
    scanf ("%f",&n);
    for (int i=0;i<n;i++)
    { 
       scanf ("%f",&a);
       if (a<=18) t1++;
       if (a>18&&a<=35) t2++;
       if (a>35&&a<=60) t3++;
       if (a>60) t4++;
    }
    r1=t1/n*100;
    r2=t2/n*100;
    r3=t3/n*100;
    r4=t4/n*100;
    printf ("1-18: %.2f%%\n",r1);
    printf ("19-35: %.2f%%\n",r2);
    printf ("36-60: %.2f%%\n",r3);
    printf ("60??: %.2f%%\n",r4);
    return 0;
}
