class Trailing_zeros {
    // Naive method
    static int getfact(int n) {
        int temp = 1;
        for (int i = 2; i <= n; i++) {
            temp = temp * i;
        }

        int rev = 0;
        while (temp % 10 == 0) {
            rev++;
            temp = temp / 10;
        }
        return rev;
    }

    // Efficient Method

    static int countZeros(int n) {
        int res = 0;
        for (int i = 5; i <= n; i = i * 5) {
            res = res + n / i;
        }
        return res;
    }

    public static void main(String[] args) {
        int n = 150;
        System.out.println(countZeros(n));
    }

}
