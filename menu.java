import java.io.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class menu{
	public static void main(String[] args)throws IOException
	{
		BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
		
		int choice = 0;
		
		while(choice < 4){
			System.out.println("This is the menu");
			if (choice < 0){
				System.out.println("Input must be 0 or a positive value!");
			}else{
				switch(choice){
					case 0:
						System.out.println("Welcome to the Java Menu Demo!");
					break;
					case 1:
						System.out.println("You picked the 1st choice!");
					break;
					case 2:
						System.out.println("This is number 2!");
					break;
					case 3:
						System.out.println("This is number 3! Enter 4 or up to exit program.");
					break;
						
				}
			}
			
			System.out.println("Enter Choice: ");
			choice = Integer.parseInt(read.readLine());
		}
	}
}