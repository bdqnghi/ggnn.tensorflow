int main ()
{
    int n;
    cin>>n;
    float a=0, b=0, c=0, d=0;
    int x[n];
    for(int i=0;i<n;i++)
    {
            cin>>x[i];
    }
    for(int j=0;j<n;j++)
    {
            if(x[j]>=1&&x[j]<=18) a++;
            else if(x[j]>=19&&x[j]<=35) b++;
            else if(x[j]>=36&&x[j]<=60) c++;
            else if(x[j]>60) d++;
    }
    float a1= 100.0*a/n;
    float b1= 100.0*b/n;
    float c1= 100.0*c/n;
    float d1= 100.0*d/n;
    printf("1-18: %.2f%%\n", a1);
    printf("19-35: %.2f%%\n", b1);
    printf("36-60: %.2f%%\n", c1);
    printf("60??: %.2f%%\n", d1);
    return 0;
}
