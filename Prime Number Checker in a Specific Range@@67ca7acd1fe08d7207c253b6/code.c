int printPrimesInRange(int a,int b){
    int count;
    for(int i=a; i<b; i++){
        count=0;
        for(int j=2; j<=i; j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==1){
            printf("%d ",i);
        }
    }
}