#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h> 

int generator(char* fname,char* lname,int num_lines) {
    srand(time(0)); 

    for (int start = 0; start < num_lines; start++){
        int digits = rand() % 1000; 
        int format = rand() % 8; 
            
        if ( format == 0 ){ 
            int fname_length = rand() % strlen(fname); 
            if (fname_length == 0){ 
                fname_length = fname_length + 1;
            }

            for (int fname_char = 0;fname_char < (fname_length + 1); fname_char++){
                printf("%c",fname[fname_char]); 
            }

            int lname_length = rand() % strlen(lname);
            if (lname_length == 0){
                lname_length = lname_length + 1;
            }

            for (int lname_char = 0;lname_char < (lname_length + 1); lname_char++){ 
                printf("%c",lname[lname_char]);
            }
            printf("%d",digits); 
            printf("\n");

        }

        if (format == 1) { 
            int fname_length = rand() % strlen(fname);
            if (fname_length == 0){
                fname_length = fname_length + 1;
            }

            for (int fname_char = 0;fname_char < (fname_length + 1); fname_char++){
                printf("%c",fname[fname_char]);
            }

            printf(".");

            int lname_length = rand() % strlen(lname);
            if (lname_length == 0){
                lname_length = lname_length + 1;
            }

            for (int lname_char = 0;lname_char < (lname_length + 1); lname_char++){
                printf("%c",lname[lname_char]);
            }
            printf("%d",digits);
            printf("\n");

        }

        if (format == 2) { 
            int fname_length = rand() % strlen(fname);
            if (fname_length == 0){
                fname_length = fname_length + 1;
            }

            for (int fname_char = 0;fname_char < (fname_length + 1); fname_char++){
                printf("%c",fname[fname_char]);
            }

            printf(".");

            int lname_length = rand() % strlen(lname);
            if (lname_length == 0){
                lname_length = lname_length + 1;
            }

            for (int lname_char = 0;lname_char < (lname_length + 1); lname_char++){
                printf("%c",lname[lname_char]);
            }
            printf("\n");

        }

        if (format == 3) { 
            int fname_length = rand() % strlen(fname);
            if (fname_length == 0){
                fname_length = fname_length + 1;
            }

            for (int fname_char = 0;fname_char < (fname_length + 1); fname_char++){
                printf("%c",fname[fname_char]);
            }

            int lname_length = rand() % strlen(lname);
            if (lname_length == 0){
                lname_length = lname_length + 1;
            }

            for (int lname_char = 0;lname_char < (lname_length + 1); lname_char++){
                printf("%c",lname[lname_char]);
            }
            printf("\n");

        }

        if ( format == 4 ){ 
            int lname_length = rand() % strlen(lname); 
            if (lname_length == 0){ 
                lname_length = lname_length + 1;
            }

            for (int lname_char = 0;lname_char < (lname_length + 1); lname_char++){
                printf("%c",lname[lname_char]); 
            }

            int fname_length = rand() % strlen(fname);
            if (fname_length == 0){
                fname_length = fname_length + 1;
            }

            for (int fname_char = 0;fname_char < (fname_length + 1); fname_char++){
                printf("%c",fname[fname_char]);
            }
            printf("%d",digits); 
            printf("\n");

        }
        if ( format == 5 ){ 
            int lname_length = rand() % strlen(lname); 
            if (lname_length == 0){ 
                lname_length = lname_length + 1;
            }

            for (int lname_char = 0;lname_char < (lname_length + 1); lname_char++){
                printf("%c",lname[lname_char]); 
            }

            printf(".");

            int fname_length = rand() % strlen(fname);
            if (fname_length == 0){
                fname_length = fname_length + 1;
            }

            for (int fname_char = 0;fname_char < (fname_length + 1); fname_char++){
                printf("%c",fname[fname_char]);
            }
            printf("%d",digits); 
            printf("\n");

        }

        if (format == 6) { 
            int lname_length = rand() % strlen(lname); 
            if (lname_length == 0){ 
                lname_length = lname_length + 1;
            }

            for (int lname_char = 0;lname_char < (lname_length + 1); lname_char++){
                printf("%c",lname[lname_char]); 
            }

            printf(".");

            int fname_length = rand() % strlen(fname);
            if (fname_length == 0){
                fname_length = fname_length + 1;
            }

            for (int fname_char = 0;fname_char < (fname_length + 1); fname_char++){
                printf("%c",fname[fname_char]);
            }
            printf("\n");

        }

        if (format == 7) { 
            int lname_length = rand() % strlen(lname); 
            if (lname_length == 0){ 
                lname_length = lname_length + 1;
            }

            for (int lname_char = 0;lname_char < (lname_length + 1); lname_char++){
                printf("%c",lname[lname_char]); 
            }

            int fname_length = rand() % strlen(fname);
            if (fname_length == 0){
                fname_length = fname_length + 1;
            }

            for (int fname_char = 0;fname_char < (fname_length + 1); fname_char++){
                printf("%c",fname[fname_char]);
            }
            printf("\n");

        }

    }
}


int main(int argc, char* argv[]) { 

    if (argc == 4){ 
        int num_lines = atoi(argv[3]); 
        generator(argv[1],argv[2],num_lines);
        
    }
    else {
        printf("Missing or too many arguments. E.G ./usernamegenerator fname lname 10");
    }
}
