#include <stdio.h>

// declare a buffer for user input of size 2048
static char input[2048];

int main(int argc, char** argv) {
    puts("MyLisp V0.1");
    puts("Press ctrl+c to exit\n");
    
    while (1) {
        // output our prompt
        fputs("MyLisp > ", stdout);
        
        // read in line of user input, max size 2048
        fgets(input, 2048, stdin);
        
        // echo input back to user
        printf("You just wrote: %s", input);
    }
    
    return 0;
}
