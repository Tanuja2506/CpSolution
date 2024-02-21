class HelloWorld {
    public static void main(String[] args) {
        int i=99, j=10000,count=1,max=0;
        if(i==0||j==0){
            max=0;
        }
        for(i=i; i<=j;i++){
            int num=i;
            while(num!=1)
            {
                if(num%2==0){
                    num=num/2;
                    count++;
                }
                else{
                    num=num*3+1;
                    count++;
                }
            }
           
            if(count>max){
                max=count;
            }
            count=1;
        }
        System.out.println(max);
        System.out.println();
    }
}

