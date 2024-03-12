import java.util.Scanner;

public class ElevatorControl {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the total weight in the elevator (in kg): ");
        int weight = scanner.nextInt();

        if (weight > 5) {
            System.out.println("Lift is overloaded");
        } else {
            System.out.print("Enter the target floor number (1, 2, or 3): ");
            int targetFloor = scanner.nextInt();

            if (targetFloor >= 1 && targetFloor <= 3) {
                System.out.println("Moving to floor no. " + targetFloor);
            } else {
                System.out.println("Invalid floor number. Please enter a valid floor (1, 2, or 3).");
            }
        }
    }
}
