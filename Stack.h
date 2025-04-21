#ifndef Stack_h                                            // Prevent the file from being included more than once
#define Stack_h                                            // Define the header guard

#include <Arduino.h>                                       // Include Arduino core functions and types

class Stack {                                              // Define a class called Stack
  public:                                                  // Public members can be accessed from outside
    Stack();                                               // Default constructor
    Stack(uint8_t size);                                   // Constructor with a custom size
    void push(float operand);                              // Push a number onto the stack
    float pop();                                           // Remove and return the top number
    float peek();                                          // Look at the top number without removing it
    bool isFull();                                         // Check if the stack is full
    bool isEmpty();                                        // Check if the stack is empty

  private:                                                 // Private members are only used inside the class
    int8_t _top;                                           // Index of the top item in the stack
    uint8_t _capacity;                                     // Maximum number of items the stack can hold
    float* _stack;                                         // Pointer to dynamically allocated array
};

#endif                                                     // End of the header guard
