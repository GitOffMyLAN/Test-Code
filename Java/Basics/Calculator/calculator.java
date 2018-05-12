import java.util.Scanner;
public class calculator{
	public static void main(string[] args){
		double FirstAddition, SecondAddition;
    		String operation;
		System.out.println("The Worst Java Calculator");
		Scanner input = new Scanner(System.in);
		System.out.println("First number to Be added");
		FirstAddition = input.nextDouble();
		System.out.println("Second Number to be added");
		SecondAddition = input.nextDouble();
		System.out.printls("Awnser " + (FirstAddition + SecondAddition));
	}
}
