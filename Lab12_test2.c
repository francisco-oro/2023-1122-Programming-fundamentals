#include <stdio.h> 
/*fgets & fputs functions */
int main(void){
    FILE *file, *file2;
    const char *newComment = "Testing fputs() function.";
    file = fopen("fuputsTest.txt", "w");
    file2 = fopen("myfile.txt", "r+");
    fputs(newComment, file); 
    fputs(newComment, file2);
    close(file);
    close(file2);
    return 0;
}