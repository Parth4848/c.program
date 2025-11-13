int main()
{

    int i,j,isprime,sum=0;

    for(i=2;i<=500;i++){
        isprime =1;
        for(j=2;j<=i/2;j++){
        if(i%j==0){
            isprime=0;
            break;
        }
    }
    if(isprime==1)
        sum+=i;
    }
    printf("Sum of all prime number between 1 to 500 =%d\n",sum);


}

