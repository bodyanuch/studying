import java.util.Scanner;
public class Main {

        public static void main(String[] args) {
            Scanner in = new Scanner(System.in);
            int m = in.nextInt();
            int dayCount = 0;
            switch (m) {
                case 1:  dayCount = 31;
                    break;
                case 2:  dayCount = 28;
                    break;
                case 3:  dayCount = 31;
                    break;
                case 4:  dayCount = 30;
                    break;
                case 5:  dayCount = 31;
                    break;
                case 6:  dayCount = 30;
                    break;
                case 7:  dayCount = 31;
                    break;
                case 8:  dayCount = 31;
                    break;
                case 9:  dayCount = 30;
                    break;
                case 10: dayCount = 31;
                    break;
                case 11: dayCount = 30;
                    break;
                case 12: dayCount = 31;
                    break;
                default: System.out.println("Error");
                    }
            System.out.println(dayCount);
    }
}
