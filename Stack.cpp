#include "Arduino.h"                                       // Include Arduino core functions
#include "Stack.h"                                         // Include the header file for the Stack class

Stack::Stack() {                                           // Default constructor
  _top = -1;                                               // Initialize the top index to -1 (empty stack)
  _capacity = 20;                                          // Default stack size is 20
  _stack = new float[_capacity];                           // Allocate memory for 20 floats
}

void Stack::push(float operand) {                          // Add a number to the top of the stack
  _stack[++_top] = operand;                                // Increment top and store the value
}

float Stack::pop() {                                       // Remove and return the top number
  return _stack[_top--];                                   // Return current top and then decrement
}

float Stack::peek() {                                      // Just look at the top number
  return _stack[_top];                                     // Return the value at the top without removing it
}

boolean Stack::isFull() {                                  // Check if the stack is completely full
  return _top == _capacity - 1;                            // True if top index equals max index
}

boolean Stack::isEmpty() {                                 // Check if the stack has no items
  return _top == -1;                                       // True if top is still at initial value
}
