TASK ONE
QUESTION ONE
       A normal variable stores an actual data value (like the number 10) in a specific memory location, which the program accesses directly
       using the variable's name. In contrast, a pointer stores a memory address (the "location") of another variable rather than the data 
       itself. To read or modify values using a pointer, the program uses indirect access through a process called dereferencing; by using 
       the * operator.

QUESTION TWO
      a normal variable is defined by specifying its data type and name, which instructs the compiler to reserve memory to store a value
      directly (e.g, int num = 10;). In contrast, a pointer is declared using  (*) operator to signify that the variable will
      store a memory address rather than a raw value (e.g, int *ptr;). The (&) operator, is then used to "define" the pointer by retrieving
      the specific memory location of a variable and assigning it to the pointer 
      (e.g., ptr = &num;). While the * symbol is used during declaration to establish the pointer type, it is also used later 
      in expressions to access or modify the value stored at that address.
QUESTION THREE
      Dereferencing is the act of accessing the value (rvalue) stored at the memory address contained within a pointer. It is performed 
      using the unary * operator.When you dereference a pointer (*ptr), the CPU reads the address stored in ptr, goes to that memory
      location, and accesses the data there.Writing *ptr = new_value; sends the new_value to be stored at the memory address held by ptr,
      thereby modifying the original variable.
      example:
      int x = 10;
      int *ptr;
      ptr = &x;
      printf("%d", *ptr); 
      *ptr = 20; 
QUESTION FOUR
     1.To pass information back and forth between functions, example, Updating a Configuration Object.
     2.To return multiple data items from a function via arguments ,example, Statistics Calculator Returning Multiple Results.
QUESTION FIVE
    1TYPE SAFETY ISSUES
       Void/generic pointers avoid type checking, which can lead to errors
    2.ERRONEOUS MEMORY ACCESS
Un-initialized pointers can point to unknown memory locations
   3 CODE READABILITY AND MAINTENANCE
Pointer-heavy code can be difficult to understand and debug
QUESTION SIX
      Call by value: A copy of the variable’s rvalue is passed. Changes inside function do not affect original variable.
      eg  void func(int a) { a = 5; }
      Call by reference: The address (pointer) of the variable is passed. Function accesses original variable using pointer.
      eg   void sum (int *a, int *b, int *t) {
                *t = *a + *b;
  QUESTION SEVEN
      a. Call by value:preferred When you want to protect original data from being modified inside the function, or when the function 
      only needs the value for computation.

      b. Call by reference: preferred When the function must modify the original variable, or when passing large data to avoid copying, 
      or when returning multiple values via parameters
      
      
