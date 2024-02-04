
class Count_digit {
    static int countDigits(int x) {
        int res = 0;
        while (x > 0) {
            x = x / 10;
            res++;
        }
        return res;
    }

    public static void main(String[] args) {
        int numDigits = 789;
        System.out.println(countDigits(numDigits));
    }

}
