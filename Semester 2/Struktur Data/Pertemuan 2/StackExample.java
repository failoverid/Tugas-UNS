import java.io.*;
import java.util.*;

class StackExample {

    // Main Method
    public static void main(String[] args)
    {

        // Default initialization of Stack
        Stack stack1 = new Stack();

        // Initialization of Stack
        // using Generics
        Stack<String> stack2 = new Stack<String>();

        // pushing the elements
        stack1.push("Prodi");
        stack1.push("Sains");
        stack1.push("Data");

        stack2.push("Fakultas");
        stack2.push("Teknologi");
        stack2.push("Informasi");
        stack2.push("dan");
        stack2.push("Sains");
        stack2.push("Data");

        // Printing the Stack Elements
        System.out.println(stack1);
        System.out.println(stack2);
    }
}