

int reverse(int);
int main() {
    int i,data[6];
    for(i=0;i<6;i++) {
        scanf("%d", &data[i]);
    }
    for(i=0;i<6;i++) {
        data[i]=reverse(data[i]);
        printf("%d\n", data[i]);
    }
    return 0;
}

int reverse(int data) {
    int i, n, sign, num[7], result=0;
    if(data<0) { 
        sign=-1;
        data=-data;
    } else if (data==0) {
        return 0;
    } else if (data==-0) {
        return -0;
    }else {
        sign=1;
    }
    for(i=0;i<7;i++) {
        num[i]=data/pow(10,i+1);
        num[i]=data-num[i]*pow(10,i+1);
        num[i]=num[i]/pow(10,i);
    }
    for(i=6;num[i]==0;i--);
    n=i;
    for(i=0;i<=n;i++) {
        result+=num[n-i]*pow(10,i);
    }
    if(sign==-1) result=-result;
    return result;
}
    