#include <stdio.h>
#include <string.h>

// Student implementation of Balanced Parentheses Checker

#define MAX 100

// Stack structure
typedef struct {
    char data[MAX];
    int top;
} Stack;

// push element into stack
void push(Stack *s, char c) {
    if (s->top < MAX - 1) {
        s->data[++(s->top)] = c;
    }
}

// pop element from stack
char pop(Stack *s) {
    if (s->top >= 0) {
        return s->data[(s->top)--];
    }
    return '\0';
}

// check matching brackets
int isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

// main logic for balance checking
int isBalanced(char *expr) {
    Stack s;
    s.top = -1;

    for (int i = 0; i < strlen(expr); i++) {
        char c = expr[i];

        // if opening bracket push into stack
        if (c == '(' || c == '[' || c == '{') {
            push(&s, c);
        }
        // if closing bracket check matching
        else if (c == ')' || c == ']' || c == '}') {
            char open = pop(&s);
            if (!isMatching(open, c)) {
                return 0;
            }
        }
    }

    // if stack empty then balanced
    return s.top == -1;
}

int main() {
    // sample test expressions
    char *expressions[] = {
        "a + (b - c) * (d",
        "m + [a - b * (c + d * {m})]",
        "a + (b - c)"
    };

    for (int i = 0; i < 3; i++) {
        printf("Expression: %s\n", expressions[i]);
        printf("Balanced: %s\n\n", isBalanced(expressions[i]) ? "Yes" : "No");
    }
    return 0;
}
