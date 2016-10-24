#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[]){
    char* string = "allo";
    printf("Length of string %s is %d.\n", string, (int) strlen(string));
    
    // char dest[5];
    int len = (int) strlen(string) + 1;
    printf("Length of the string was: %d.\n", len );
    char dest[len];
    strncpy(dest, string, len);
    printf("Length of string %s is %d.\n", dest, (int) strlen(dest));
    
    return 0;
}
