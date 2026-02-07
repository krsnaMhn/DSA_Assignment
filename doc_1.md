# Program 1: Balanced Parentheses Checker (Student Documentation)

## Introduction
In this program, we implemented a simple stack-based solution to check whether
parentheses in an expression are balanced or not. This helped us understand
stack operations like push and pop.

## Data Structure Used
We used a stack implemented using an array:
- data[MAX] : stores characters
- top : indicates the current top index

## Algorithm (Simple Steps)
1. Traverse the expression character by character.
2. If opening bracket is found, push into stack.
3. If closing bracket is found, pop from stack.
4. Check if opening and closing brackets match.
5. At the end, if stack is empty then expression is balanced.

## Functions Used
- push(): inserts element into stack
- pop(): removes top element
- isMatching(): checks matching brackets
- isBalanced(): main logic for checking balance

## Learning Outcome
We learned:
- Stack implementation using array
- Use of structures in C
- Basic string traversal
