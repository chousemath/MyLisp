#include <stdio.h>
// gives access to the `free` function
#include <stdlib.h>
#include <editline/readline.h>

int main(int argc, char** argv) {
    puts("MyLisp V0.1");
    puts("Press ctrl+c to exit\n");
    
    // in a conditional block, 1 always evaluates to true
    while (1) {
        // readline allows us to prompt and get input in one line
        // readline strips the new line character
        // readline allocates new memory when it is called
        char* input = readline("MyLisp> ");
        
        // add input to history
        add_history(input);
        
        // echo input back to user
        printf("You just wrote: %s\n", input);
        
        // free retrieved input
        free(input);
    }
    
    return 0;
}
