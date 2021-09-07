#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h> 

int generator(char* fname,char* lname,int lim) {
    srand(time(0)); 

    for (int k = 0; k < lim; k++){
        int digits = rand() % 1000; 
        int format = rand() % 4; 
            
        if ( format == 0 ){ 
            int f_len = rand() % strlen(fname); 
            if (f_len == 0){ 
                f_len = f_len + 1;
            }

            for (int i = 0;i < (f_len + 1); i++){
                printf("%c",fname[i]); 
            }

            int l_len = rand() % strlen(lname);
            if (l_len == 0){
                l_len = l_len + 1;
            }

            for (int j = 0;j < (l_len + 1); j++){
                printf("%c",lname[j]);
            }
            printf("%d",digits); 
            printf("\n");

        }

        if (format == 1) { 
            int f_len = rand() % strlen(fname);
            if (f_len == 0){
                f_len = f_len + 1;
            }

            for (int i = 0;i < (f_len + 1); i++){
                printf("%c",fname[i]);
            }

            printf(".");

            int l_len = rand() % strlen(lname);
            if (l_len == 0){
                l_len = l_len + 1;
            }

            for (int j = 0;j < (l_len + 1); j++){
                printf("%c",lname[j]);
            }
            printf("%d",digits);
            printf("\n");

        }

        if (format == 2) { 
            int f_len = rand() % strlen(fname);
            if (f_len == 0){
                f_len = f_len + 1;
            }

            for (int i = 0;i < (f_len + 1); i++){
                printf("%c",fname[i]);
            }

            printf(".");

            int l_len = rand() % strlen(lname);
            if (l_len == 0){
                l_len = l_len + 1;
            }

            for (int j = 0;j < (l_len + 1); j++){
                printf("%c",lname[j]);
            }
            printf("\n");

        }

        if (format == 3) { 
            int f_len = rand() % strlen(fname);
            if (f_len == 0){
                f_len = f_len + 1;
            }

            for (int i = 0;i < (f_len + 1); i++){
                printf("%c",fname[i]);
            }

            int l_len = rand() % strlen(lname);
            if (l_len == 0){
                l_len = l_len + 1;
            }

            for (int j = 0;j < (l_len + 1); j++){
                printf("%c",lname[j]);
            }
            printf("\n");

        }

    }
}


int main(int argc, char* argv[]) { 

    if (argc == 4){ 
        int lim = atoi(argv[3]); 
        generator(argv[1],argv[2],lim);
        
    }
    else {
        printf("Missing or too many arguments. E.G ./usernamegenerator fname lname 10");
    }
}
