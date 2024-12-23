#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Big_Endian_Operations {
    char hexa[8];
}Endian;

typedef struct tags {
 char name[64]; //utf16
 char surname[32]; //utf8
 char gender;
 char email[32];
 char phone_number[16];
 char address[32];
 char level_of_education[8];
 unsigned int income_level; // given little-endian
 unsigned int expenditure; // given big-endian
 char currency_unit[16];
 char currentMood[32];
 float height;
 unsigned int weight;
}tagStruct;

typedef struct record {
 char name[64]; //utf16
 char surname[32]; //utf8
 char gender;
 char email[32];
 char phone_number[16];
 char address[32];
 char level_of_education[8];
 unsigned int income_level; // given little-endian
 unsigned int expenditure; // given big-endian
 char currency_unit[16];
 char currentMood[32];
 float height;
 unsigned int weight;
}recordStruct;

unsigned int Big_Endian_Op(unsigned int number){    // A function for generating the Big-Endian

    Endian endn;
    unsigned int decimal_number = number;
    unsigned int temp = decimal_number;


    for (int i = 7; i >= 0; i--){     // Creating a hexadecimal number with big-endian

        int mod = temp % 16;

        if(i == 7){
            if(mod == 15)
                endn.hexa[1] = 'F';
            else if(mod == 14)
                endn.hexa[1] = 'E';
            else if(mod == 13)
                endn.hexa[1] = 'D';
            else if(mod == 12)
                endn.hexa[1] = 'C';
            else if(mod == 11)
                endn.hexa[1] = 'B';
            else if(mod == 10)
                endn.hexa[1] = 'A';
            else if(mod == 9)
                endn.hexa[1] = '9';
            else if(mod == 8)
                endn.hexa[1] = '8';
            else if(mod == 7)
                endn.hexa[1] = '7';
            else if(mod == 6)
                endn.hexa[1] = '6';
            else if(mod == 5)
                endn.hexa[1] = '5';
            else if(mod == 4)
                endn.hexa[1] = '4';
            else if(mod == 3)
                endn.hexa[1] = '3';
            else if(mod == 2)
                endn.hexa[1] = '2';
            else if(mod == 1)
                endn.hexa[1] = '1';
            else
                endn.hexa[1] = '0';
        }
        else if(i == 6){
            if(mod == 15)
                endn.hexa[0] = 'F';
            else if(mod == 14)
                endn.hexa[0] = 'E';
            else if(mod == 13)
                endn.hexa[0] = 'D';
            else if(mod == 12)
                endn.hexa[0] = 'C';
            else if(mod == 11)
                endn.hexa[0] = 'B';
            else if(mod == 10)
                endn.hexa[0] = 'A';
            else if(mod == 9)
                endn.hexa[0] = '9';
            else if(mod == 8)
                endn.hexa[0] = '8';
            else if(mod == 7)
                endn.hexa[0] = '7';
            else if(mod == 6)
                endn.hexa[0] = '6';
            else if(mod == 5)
                endn.hexa[0] = '5';
            else if(mod == 4)
                endn.hexa[0] = '4';
            else if(mod == 3)
                endn.hexa[0] = '3';
            else if(mod == 2)
                endn.hexa[0] = '2';
            else if(mod == 1)
                endn.hexa[0] = '1';
            else
                endn.hexa[0] = '0';
        }
        else if (i == 5){
            if(mod == 15)
                endn.hexa[3] = 'F';
            else if(mod == 14)
                endn.hexa[3] = 'E';
            else if(mod == 13)
                endn.hexa[3] = 'D';
            else if(mod == 12)
                endn.hexa[3] = 'C';
            else if(mod == 11)
                endn.hexa[3] = 'B';
            else if(mod == 10)
                endn.hexa[3] = 'A';
            else if(mod == 9)
                endn.hexa[3] = '9';
            else if(mod == 8)
                endn.hexa[3] = '8';
            else if(mod == 7)
                endn.hexa[3] = '7';
            else if(mod == 6)
                endn.hexa[3] = '6';
            else if(mod == 5)
                endn.hexa[3] = '5';
            else if(mod == 4)
                endn.hexa[3] = '4';
            else if(mod == 3)
                endn.hexa[3] = '3';
            else if(mod == 2)
                endn.hexa[3] = '2';
            else if(mod == 1)
                endn.hexa[3] = '1';
            else
                endn.hexa[3] = '0';
        }
        else if (i == 4){
            if(mod == 15)
                endn.hexa[2] = 'F';
            else if(mod == 14)
                endn.hexa[2] = 'E';
            else if(mod == 13)
                endn.hexa[2] = 'D';
            else if(mod == 12)
                endn.hexa[2] = 'C';
            else if(mod == 11)
                endn.hexa[2] = 'B';
            else if(mod == 10)
                endn.hexa[2] = 'A';
            else if(mod == 9)
                endn.hexa[2] = '9';
            else if(mod == 8)
                endn.hexa[2] = '8';
            else if(mod == 7)
                endn.hexa[2] = '7';
            else if(mod == 6)
                endn.hexa[2] = '6';
            else if(mod == 5)
                endn.hexa[2] = '5';
            else if(mod == 4)
                endn.hexa[2] = '4';
            else if(mod == 3)
                endn.hexa[2] = '3';
            else if(mod == 2)
                endn.hexa[2] = '2';
            else if(mod == 1)
                endn.hexa[2] = '1';
            else
                endn.hexa[2] = '0';
        }
        else if (i == 3){
            if(mod == 15)
                endn.hexa[5] = 'F';
            else if(mod == 14)
                endn.hexa[5] = 'E';
            else if(mod == 13)
                endn.hexa[5] = 'D';
            else if(mod == 12)
                endn.hexa[5] = 'C';
            else if(mod == 11)
                endn.hexa[5] = 'B';
            else if(mod == 10)
                endn.hexa[5] = 'A';
            else if(mod == 9)
                endn.hexa[5] = '9';
            else if(mod == 8)
                endn.hexa[5] = '8';
            else if(mod == 7)
                endn.hexa[5] = '7';
            else if(mod == 6)
                endn.hexa[5] = '6';
            else if(mod == 5)
                endn.hexa[5] = '5';
            else if(mod == 4)
                endn.hexa[5] = '4';
            else if(mod == 3)
                endn.hexa[5] = '3';
            else if(mod == 2)
                endn.hexa[5] = '2';
            else if(mod == 1)
                endn.hexa[5] = '1';
            else
                endn.hexa[5] = '0';
        }
        else if (i == 2){
            if(mod == 15)
                endn.hexa[4] = 'F';
            else if(mod == 14)
                endn.hexa[4] = 'E';
            else if(mod == 13)
                endn.hexa[4] = 'D';
            else if(mod == 12)
                endn.hexa[4] = 'C';
            else if(mod == 11)
                endn.hexa[4] = 'B';
            else if(mod == 10)
                endn.hexa[4] = 'A';
            else if(mod == 9)
                endn.hexa[4] = '9';
            else if(mod == 8)
                endn.hexa[4] = '8';
            else if(mod == 7)
                endn.hexa[4] = '7';
            else if(mod == 6)
                endn.hexa[4] = '6';
            else if(mod == 5)
                endn.hexa[4] = '5';
            else if(mod == 4)
                endn.hexa[4] = '4';
            else if(mod == 3)
                endn.hexa[4] = '3';
            else if(mod == 2)
                endn.hexa[4] = '2';
            else if(mod == 1)
                endn.hexa[4] = '1';
            else
                endn.hexa[4] = '0';
        }
        else if (i == 1){
            if(mod == 15)
                endn.hexa[7] = 'F';
            else if(mod == 14)
                endn.hexa[7] = 'E';
            else if(mod == 13)
                endn.hexa[7] = 'D';
            else if(mod == 12)
                endn.hexa[7] = 'C';
            else if(mod == 11)
                endn.hexa[7] = 'B';
            else if(mod == 10)
                endn.hexa[7] = 'A';
            else if(mod == 9)
                endn.hexa[7] = '9';
            else if(mod == 8)
                endn.hexa[7] = '8';
            else if(mod == 7)
                endn.hexa[7] = '7';
            else if(mod == 6)
                endn.hexa[7] = '6';
            else if(mod == 5)
                endn.hexa[7] = '5';
            else if(mod == 4)
                endn.hexa[7] = '4';
            else if(mod == 3)
                endn.hexa[7] = '3';
            else if(mod == 2)
                endn.hexa[7] = '2';
            else if(mod == 1)
                endn.hexa[7] = '1';
            else
                endn.hexa[7] = '0';
        }
        else{
            if(mod == 15)
                endn.hexa[6] = 'F';
            else if(mod == 14)
                endn.hexa[6] = 'E';
            else if(mod == 13)
                endn.hexa[6] = 'D';
            else if(mod == 12)
                endn.hexa[6] = 'C';
            else if(mod == 11)
                endn.hexa[6] = 'B';
            else if(mod == 10)
                endn.hexa[6] = 'A';
            else if(mod == 9)
                endn.hexa[6] = '9';
            else if(mod == 8)
                endn.hexa[6] = '8';
            else if(mod == 7)
                endn.hexa[6] = '7';
            else if(mod == 6)
                endn.hexa[6] = '6';
            else if(mod == 5)
                endn.hexa[6] = '5';
            else if(mod == 4)
                endn.hexa[6] = '4';
            else if(mod == 3)
                endn.hexa[6] = '3';
            else if(mod == 2)
                endn.hexa[6] = '2';
            else if(mod == 1)
                endn.hexa[6] = '1';
            else
                endn.hexa[6] = '0';
        }


        temp -= mod;
        temp = temp / 16;
    }

    unsigned int decimal = 0, base = 1;

    for(int i = 7; i >= 0; i--)     // Getting a decimal number from the hexadecimal number we just created above
    {
        if(endn.hexa[i] >= '0' && endn.hexa[i] <= '9')
        {
            decimal += (endn.hexa[i] - 48) * base;
            base *= 16;
        }
        else
        {
            decimal += (endn.hexa[i] - 55) * base;
            base *= 16;
        }
    }
    
    return(decimal);
}

int main(int argc, char *argv[]){

    int id_counter = 1;   // Row id counter
    recordStruct rRecords;
    tagStruct rTags;

    FILE *rp, *wp;    // readFile and writeFile

    wp = fopen(argv[2], "w");   // Write into the file

    if(wp == NULL){
        puts("Couldn't open the file!");
        exit (1);
    }

    rp = fopen(argv[1], "r");   // Read from the file

    if(rp == NULL){
        printf("Couldn't open the file!");
        exit(1);
    }

    char *file_name = strtok(argv[2], "."); // Naming the xml file according to the dat file
    fprintf(wp, "<%s>\n" ,file_name);

    fread(&rTags, sizeof(tagStruct), 1, rp);    // Getting values from the dat file and saving them in the struct

    rTags.name, rTags.surname, rTags.gender, rTags.email, rTags.phone_number, rTags.address, rTags.level_of_education, rTags.income_level,
    rTags.expenditure, rTags.currency_unit, rTags.currentMood, rTags.height, rTags.weight;

    while(fread(&rRecords, sizeof(recordStruct), 1, rp) == 1){  // Writing into the xml file according to the values we get from the dat file
        
        if(rRecords.weight == 0)
            break;
        
        fprintf(wp, "   <row id = %c%d%c>\n", '"' ,id_counter++, '"');

        fprintf(wp, "       <%s>%s</%s>\n", rTags.name, rRecords.name, rTags.name);
        fprintf(wp, "       <%s>%s</%s>\n", rTags.surname, rRecords.surname, rTags.surname);
        fprintf(wp, "       <gender>%c</gender>\n", rRecords.gender);
        fprintf(wp, "       <%s>%s</%s>\n", rTags.email, rRecords.email, rTags.email);
        fprintf(wp, "       <%s>%s</%s>\n", rTags.phone_number, rRecords.phone_number, rTags.phone_number);
        fprintf(wp, "       <%s>%s</%s>\n", rTags.address, rRecords.address, rTags.address);
        fprintf(wp, "       <level_of_education>%s</level_of_education>\n", rRecords.level_of_education);
        fprintf(wp, "       <income_level bigEnd=%c%u%c>%u</income_level>\n", '"', Big_Endian_Op(rRecords.income_level), '"' ,rRecords.income_level);
        fprintf(wp, "       <expenditure bigEnd=%c%u%c>%u</expenditure>\n", '"', rRecords.expenditure, '"', Big_Endian_Op(rRecords.expenditure));
        fprintf(wp, "       <%s>%s</%s>\n", rTags.currency_unit, rRecords.currency_unit, rTags.currency_unit);
        fprintf(wp, "       <%s>%s</%s>\n", rTags.currentMood, rRecords.currentMood, rTags.currentMood);
        fprintf(wp, "       <height>%f</height>\n", rRecords.height);
        fprintf(wp, "       <weight>%u</weight>\n", rRecords.weight);

        fprintf(wp, "   </row>\n");
    }

    fprintf(wp, "</%s>\n" ,file_name);  // Last part of the xml file

    fclose(rp); // Closing the file operators after we are done with them
    fclose(wp);

    return(1);
}