public class MaxAmong3 {
    public static void main(String[] args) {
        int a=5,b=9,c=6;
        int gr=greatest(a,b,c);
        System.err.println(gr);
    }

    static int greatest(int a, int b,int c){
        return Math.max(Math.max(a, b),c);
    }
}
