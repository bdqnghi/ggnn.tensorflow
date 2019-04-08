

int main()
{
    int n,a,c1,c2,c3,c4; //n????a??????,ci????
    c1=c2=c3=c4=0;
    cin>>n;

    for (int i=0;i<n;i++)
    {
        cin>>a;
        if (a<=18) c1++;
        else if (a<=35) c2++;
        else if (a<=60) c3++;
        else c4++;
    }
    float s=c1+c2+c3+c4;

    printf("1-18: %.2f%c\n",c1/s*100,'%');
    printf("19-35: %.2f%c\n",c2/s*100,'%');
    printf("36-60: %.2f%c\n",c3/s*100,'%');
    printf("60??: %.2f%c\n",c4/s*100,'%');


    return 0;
}
