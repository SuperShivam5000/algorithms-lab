class NumberOfDigits{
    public static void main(String[] args) {
        int n=102390;
        int res = getDigits(n);
        System.out.println(res);
    }

    static int getDigits(int n){
        int i,c=0;
        for(i=n;i>0;i/=10) c++;
        return c;
    }
}