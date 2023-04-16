package ch1;

import java.util.Scanner;

public class Grading {

	public static void main(String[] args) {
		char grade;
		
		Scanner scanner=new Scanner(System.in);
		int Score=scanner.nextInt();
		
		if(Score>=90)
			grade='a';
		else if(Score>=80)
			grade='b';
		else if(Score>=70)
			grade='c';
		else if(Score<60)
			grade='f';
		
		System.out.println("등급은"+grade);
		
		scanner.close();
		
		
	}

}
