// Dummy Java program
public class Main {
    public static void main(String[] args) {
        greet("Alice");
        
        int sum = add(3, 5);
        System.out.println("Sum of 3 and 5: " + sum);

        int[] numbers = {1, 2, 3, 4, 5};
        int[] squares = squareArray(numbers);

        System.out.print("Squares: ");
        for (int square : squares) {
            System.out.print(square + " ");
        }
    }

    public static void greet(String name) {
        System.out.println("Hello, " + name + "!");
    }

    public static int add(int a, int b) {
        return a + b;
    }

    public static int[] squareArray(int[] arr) {
        int[] result = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {
            result[i] = arr[i] * arr[i];
        }
        return result;
    }
}
